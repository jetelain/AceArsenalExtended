﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using BIS.Core.Config;
using Helper.Detector;

namespace Helper
{
    public static class ModelDetector
    {
        public static List<DetectedModelInfo> Detect(string[] configFiles, Action<string> progress)
        {
            progress("Load config files");
            var paramFiles = configFiles.Select(f => new { Param = ConfigHelper.ReadParamFile(f), FileName = f}).ToList();

            var mergedCfgVehicles = paramFiles.Select(f => f.Param).Get<ParamClass>("CfgVehicles").ToList();
            var mergedCfgWeapons = paramFiles.Select(f => f.Param).Get<ParamClass>("CfgWeapons").ToList();
            var mergedCfgGlasses = paramFiles.Select(f => f.Param).Get<ParamClass>("CfgGlasses").ToList();

            var allConfigs = new List<DetectedConfigInfo>();

            foreach (var file in paramFiles)
            {
                var pack = Path.GetFileNameWithoutExtension(file.FileName);

                progress($"{pack}: Scan CfgWeapons");
                Scan(allConfigs, mergedCfgWeapons, file.Param.Root.Get<ParamClass>("CfgWeapons").Get<ParamClass>(), "CfgWeapons", mergedCfgVehicles, file.FileName);

                progress($"{pack}: Scan CfgGlasses");
                Scan(allConfigs, mergedCfgGlasses, file.Param.Root.Get<ParamClass>("CfgGlasses").Get<ParamClass>(), "CfgGlasses", mergedCfgVehicles, file.FileName);

                progress($"{pack}: Scan CfgVehicles");
                Scan(allConfigs, mergedCfgVehicles, file.Param.Root.Get<ParamClass>("CfgVehicles").Get<ParamClass>().Where(c => c.Inherits("Bag_Base", mergedCfgVehicles)), "CfgVehicles", mergedCfgVehicles, file.FileName);
            }

            progress("Aggregate data");
            var allModels = new List<DetectedModelInfo>();
            foreach (var model in allConfigs.GroupBy(m => m.P3dModel, StringComparer.OrdinalIgnoreCase))
            {
                var configs = model.ToList();
                if (configs.Count > 1)
                {
                    var modelInfo = new DetectedModelInfo();
                    modelInfo.Name = NameHelper.LargestCommon(model.Select(m => m.ClassName));
                    modelInfo.Configs = configs;
                    modelInfo.P3dModel = configs[0].P3dModel;
                    modelInfo.ClassRoot = configs[0].ClassRoot;
                    modelInfo.FileNames = configs.Select(c => c.FileName).Distinct().ToList();
                    modelInfo.PackageName = NameHelper.LargestCommonStart(modelInfo.FileNames.Select(Path.GetFileNameWithoutExtension));
                    modelInfo.HiddenSelections = configs.SelectMany(c => c.HiddenSelections.Keys).Distinct().OrderBy(h => h).Select(name => new DetectedHiddenSelection()
                    {
                        Name = name,
                        Values = configs.Select(c => c.GetHiddenSelection(name)).Distinct().OrderBy(h => h).Select(value => new DetectedHiddenSelectionValue()
                        {
                            Value = value,
                            SuggestedName = SuggestName(modelInfo.Name, configs, name, value)
                        }).ToList()
                    }).Where(h => h.Values.Count > 1).ToList();
                    allModels.Add(modelInfo);
                }
            }
            return allModels;
        }

        private static string SuggestName(string baseConfigName, List<DetectedConfigInfo> configs, string hiddenSelection, string value)
        {
            var impacted = configs.Where(c => c.GetHiddenSelection(hiddenSelection) == value);
            var names = impacted
                .Select(c => c.ClassName.Replace(baseConfigName, "", StringComparison.OrdinalIgnoreCase).Trim('_').Split('_'))
                .ToList();
            var common = names[0].Where(n => names.Skip(1).All(o => o.Contains(n, StringComparer.OrdinalIgnoreCase))).ToList();
            if (common.Count == 1)
            {
                return common[0];
            }
            else if (common.Count > 1)
            {
                return string.Join('_', common);
            }
            else
            {
                names = impacted.Select(c => Extract(c.DisplayName)).ToList();
                common = names[0].Where(n => names.Skip(1).All(o => o.Contains(n, StringComparer.OrdinalIgnoreCase))).ToList();
                if (common.Count == 1)
                {
                    return common[0];
                }
            }
            if (value == null)
            {
                return "default";
            }
            if (value == string.Empty)
            {
                return "none";
            }
            return Path.GetFileNameWithoutExtension(value);
        }

        private static string[] Extract(string displayName)
        {
            var i = displayName.IndexOf('(');
            if (i != -1)
            {
                return displayName.Substring(i + 1).TrimEnd(')').Split('/').ToArray();
            }
            return new string[0];
        }

        private static void Scan(List<DetectedConfigInfo> allConfigs, List<ParamClass> cfgClassRoot, IEnumerable<ParamClass> classes, string classRoot, List<ParamClass> cfgVehicles, string fileName)
        {
            foreach (var entry in classes)
            {
                var scope = entry.GetValue<int>("scope", cfgClassRoot);
                if (scope == 2 && (classRoot != "CfgWeapons" || !entry.Get<ParamClass>("LinkedItems").Any()))
                {
                    var infos = new DetectedConfigInfo();
                    infos.Definition = entry.ToString();
                    infos.ClassName = entry.Name;
                    infos.FileName = fileName;
                    infos.ClassRoot = classRoot;
                    infos.DisplayName = entry.GetValue<string>("displayName", cfgClassRoot);
                    infos.P3dModel = entry.GetValue<string>("model", cfgClassRoot);
                    var hiddenSelections = entry.GetArray<string>("hiddenSelections", cfgClassRoot);
                    var hiddenSelectionsTextures = entry.GetArray<string>("hiddenSelectionsTextures", cfgClassRoot);
                    var itemInfo = entry.Get<ParamClass>("ItemInfo", cfgClassRoot);
                    string modelOff = null;
                    if (itemInfo != null)
                    {
                        var uniformModel = itemInfo.GetValue<string>("uniformModel", cfgClassRoot);
                        if (!string.IsNullOrEmpty(uniformModel))
                        {
                            infos.P3dModel = uniformModel;
                        }

                        var uniformClass = itemInfo.GetValue<string>("uniformClass", cfgClassRoot);
                        if (uniformClass != null)
                        {
                            var vehicle = cfgVehicles.Get<ParamClass>(uniformClass).FirstOrDefault();
                            if (vehicle != null)
                            {
                                infos.P3dModel = vehicle.GetValue<string>("model", cfgVehicles) ?? infos.P3dModel;
                                hiddenSelections = vehicle.GetArray<string>("hiddenSelections", cfgVehicles) ?? hiddenSelections;
                                hiddenSelectionsTextures = vehicle.GetArray<string>("hiddenSelectionsTextures", cfgVehicles) ?? hiddenSelectionsTextures;

                            }
                        }
                        modelOff = itemInfo.GetValue<string>("modelOff", Enumerable.Empty<ParamClass>());
                    }
                    if (!string.IsNullOrEmpty(infos.P3dModel))
                    {
                        infos.P3dModel = infos.P3dModel.Replace('/', '\\').Trim('\\');
                        if (hiddenSelections != null && hiddenSelections.Length > 0)
                        {
                            infos.HiddenSelections =
                                hiddenSelections.Select((n, i) => new
                                {
                                    Name = n.ToLowerInvariant(),
                                    Value = hiddenSelectionsTextures == null || i >= hiddenSelectionsTextures.Length ? string.Empty : hiddenSelectionsTextures[i].Replace('/', '\\').Trim('\\')
                                })
                                .Where(p => p.Value != null)
                                .ToDictionary(p => p.Name, p => p.Value);
                        }
                        if ( !string.IsNullOrEmpty(modelOff))
                        {
                            infos.HiddenSelections["nvg_off"] = modelOff;
                        }
                        allConfigs.Add(infos);
                    }
                }
            }
        }

    }
}
