using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using BIS.Core.Config;
using BIS.Core.Streams;
using BIS.PBO;
using Helper.Detector;

namespace Helper
{
    public static class ModelDetector
    {
        public static List<DetectedModelInfo> Detect(string[] configFiles, Action<string> progress)
        {
            progress("Load config files");
            var paramFiles = configFiles.Select(ReadParamFile).ToList();
            var cfgVehicles = paramFiles.Get<ParamClass>("CfgVehicles").ToList();
            var cfgWeapons = paramFiles.Get<ParamClass>("CfgWeapons").ToList();
            var cfgGlasses = paramFiles.Get<ParamClass>("CfgGlasses").ToList();

            var allConfigs = new List<DetectedConfigInfo>();
            progress("Scan CfgWeapons");
            Scan(allConfigs, cfgWeapons, cfgWeapons.Get<ParamClass>(), "CfgWeapons", cfgVehicles);

            progress("Scan CfgGlasses");
            Scan(allConfigs, cfgGlasses, cfgGlasses.Get<ParamClass>(), "CfgGlasses", cfgVehicles);

            progress("Scan CfgVehicles");
            Scan(allConfigs, cfgVehicles, cfgVehicles.Get<ParamClass>().Where(c => c.Inherits("Bag_Base", cfgVehicles)), "CfgVehicles", cfgVehicles);

            progress("Aggregate data");
            var allModels = new List<DetectedModelInfo>();
            foreach (var model in allConfigs.GroupBy(m => m.P3dModel))
            {
                var configs = model.ToList();
                if (configs.Count > 1)
                {
                    var modelInfo = new DetectedModelInfo();
                    modelInfo.Name = LargestCommonName(model.Select(m => m.ClassName));
                    modelInfo.Configs = configs;
                    modelInfo.P3dModel = configs[0].P3dModel;
                    modelInfo.ClassRoot = configs[0].ClassRoot;
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
                .Select(c => c.ClassName.Substring(baseConfigName.Length).TrimStart('_').Split('_'))
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

        internal static string LargestCommonName(IEnumerable<string> enumerable)
        {
            var common = enumerable.OrderBy(n => n.Length).ThenBy(n => n).FirstOrDefault();
            while (!enumerable.All(n => n.StartsWith(common, StringComparison.OrdinalIgnoreCase)))
            {
                common = common.Substring(0, common.Length - 1);
            }
            return common.TrimEnd('_');
        }

        private static void Scan(List<DetectedConfigInfo> allConfigs, List<ParamClass> cfgClassRoot, IEnumerable<ParamClass> classes, string classRoot, List<ParamClass> cfgVehicles)
        {
            foreach (var entry in classes)
            {
                var scope = entry.GetValue<int>("scope", cfgClassRoot);
                if (scope == 2)
                {
                    var infos = new DetectedConfigInfo();
                    infos.ClassName = entry.Name;
                    infos.ClassRoot = classRoot;
                    infos.DisplayName = entry.GetValue<string>("displayName", cfgClassRoot);
                    infos.P3dModel = entry.GetValue<string>("model", cfgClassRoot);
                    var hiddenSelections = entry.GetArray<string>("hiddenSelections", cfgClassRoot);
                    var hiddenSelectionsTextures = entry.GetArray<string>("hiddenSelectionsTextures", cfgClassRoot);
                    var itemInfo = entry.Get<ParamClass>("ItemInfo", cfgClassRoot);
                    if (itemInfo != null)
                    {
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
                        allConfigs.Add(infos);
                    }
                }
            }
        }

        private static ParamFile ReadParamFile(string file)
        {
            var ext = Path.GetExtension(file);
            ParamFile paramFile;
            if (string.Equals(ext, ".cpp", System.StringComparison.OrdinalIgnoreCase))
            {
                paramFile = ParseCpp(file);
            }
            else if (string.Equals(ext, ".pbo", System.StringComparison.OrdinalIgnoreCase))
            {
                var pbo = new PBO(file);
                var configBin = pbo.Files.FirstOrDefault(f => f.FileName == "config.bin");
                if (configBin != null)
                {
                    using (var stream = configBin.OpenRead())
                    {
                        paramFile = StreamHelper.Read<ParamFile>(stream);
                    }
                }
                else
                {
                    var src = Path.GetTempFileName();
                    var configCpp = pbo.Files.FirstOrDefault(f => f.FileName == "config.cpp");
                    if (configCpp != null)
                    {
                        using (var streamFile = File.Create(src))
                        using (var stream = configCpp.OpenRead())
                        {
                            stream.CopyTo(streamFile);
                        }
                        paramFile = ParseCpp(src);
                        File.Delete(src);
                    }
                    else
                    {
                        paramFile = new ParamFile();
                    }
                }
            }
            else
            {
                paramFile = StreamHelper.Read<ParamFile>(file);
            }
            return paramFile;
        }

        private static ParamFile ParseCpp(string src)
        {
            ParamFile paramFile;
            var dst = Path.GetTempFileName();
            Process.Start(new ProcessStartInfo(@"E:\Program Files\Steam\steamapps\common\Arma 3 Tools\CfgConvert\CfgConvert.exe", $@"-bin -dst ""{dst}"" ""{src}""") { WindowStyle = ProcessWindowStyle.Hidden }).WaitForExit();
            paramFile = StreamHelper.Read<ParamFile>(dst);
            File.Delete(dst);
            return paramFile;
        }
    }
}
