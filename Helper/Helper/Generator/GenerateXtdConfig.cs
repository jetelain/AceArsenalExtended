using System.Collections.Generic;
using System.IO;
using System.Linq;
using BIS.Core.Config;

namespace Helper.Generator
{
    public class GenerateXtdConfig
    {
        public GenerateXtdConfig(IEnumerable<IDetectedModelMapper> all)
        {
            Models = all.GroupBy(m => new { ModelName = m.ModelName.ToLowerInvariant(), m.Detected.ClassRoot }).Select(m => new GenerateModel(m.ToList())).ToList();
        }

        public List<GenerateModel> Models { get; }

        public void WriteToSingleFile(string fileName)
        {
            using (var writer = File.CreateText(fileName))
            {
                WriteToSingle(writer);
            }
        }

        public void WriteToDirectory(string directory)
        {
            ParamClass incremental;
            var rootConfig = Path.Combine(directory, "config.cpp");
            if (!File.Exists(rootConfig))
            {
                WriteInitialConfigFile(rootConfig);
                incremental = new ParamClass();
            }
            else
            {
                incremental = ConfigHelper.ReadParamFile(rootConfig).Root;
            }

            using (var writer = File.CreateText(Path.Combine(directory, "XtdGearModels.hpp")))
            {
                writer.WriteLine($"class XtdGearModels {{");

                writer.WriteLine(@"    #include ""XtdGearModels_Common.hpp""");

                var common = Path.Combine(directory, "XtdGearModels_Common.hpp");
                if (!File.Exists(common))
                {
                    File.WriteAllText(common, string.Empty);
                }

                foreach (var classRoot in Models.GroupBy(m => m.ClassRoot).OrderBy(m => m.Key))
                {
                    var incrementalRoot = incremental.Get<ParamClass>("XtdGearModels").Get<ParamClass>(classRoot.Key);

                    writer.WriteLine($"    class {classRoot.Key} {{");
                    foreach (var package in classRoot.GroupBy(p => p.PackageName))
                    {
                        var dir = Path.Combine(directory, "XtdGearModels", package.Key, classRoot.Key);
                        Directory.CreateDirectory(dir);
                        foreach (var model in package.OrderBy(g => g.Name))
                        {
                            writer.WriteLine($@"         #include ""{Path.Combine("XtdGearModels", package.Key, classRoot.Key, model.Name + ".hpp")}""");
                            using (var mwriter = File.CreateText(Path.Combine(dir, model.Name + ".hpp")))
                            {
                                model.WriteGearModelTo(mwriter, string.Empty, incrementalRoot.Get<ParamClass>(model.Name).FirstOrDefault());
                            }
                        }
                    }
                    writer.WriteLine($"    }};");
                }
                writer.WriteLine($"}};");
            }

            using (var writer = File.CreateText(Path.Combine(directory, "XtdGearInfos.hpp")))
            {
                writer.WriteLine($"class XtdGearInfos {{");
                foreach (var classRoot in Models.GroupBy(m => m.ClassRoot).OrderBy(m => m.Key))
                {
                    writer.WriteLine($"    class {classRoot.Key} {{");
                    foreach (var package in classRoot.GroupBy(p => p.PackageName))
                    {
                        var dir = Path.Combine(directory, "XtdGearInfos", package.Key, classRoot.Key);
                        Directory.CreateDirectory(dir);
                        foreach (var model in package.OrderBy(g => g.Name))
                        {
                            writer.WriteLine($@"         #include ""{Path.Combine("XtdGearInfos", package.Key, classRoot.Key, model.Name + ".hpp")}""");
                            using (var mwriter = File.CreateText(Path.Combine(dir, model.Name + ".hpp")))
                            {
                                model.WriteGearInfosTo(mwriter, string.Empty);
                            }
                        }
                    }
                    writer.WriteLine($"    }};");
                }
                writer.WriteLine($"}};");
            }
        }

        private void WriteInitialConfigFile(string rootConfig)
        {
            using (var writer = File.CreateText(rootConfig))
            {
                var name = "aceax_" + NameHelper.LargestCommonStart(Models.Select(m => m.PackageName)) + "_compat";
                writer.WriteLine(@"class CfgPatches {");
                writer.WriteLine(@$"  class {name} {{");
                writer.WriteLine(@"    units[] = {};");
                writer.WriteLine(@"    weapons[] = {};");
                writer.WriteLine(@"    requiredVersion = ""1.0"";");
                writer.WriteLine(@"    requiredAddons[] = {""aceax_gearinfo""};");
                writer.WriteLine(@"  };");
                writer.WriteLine(@"};");
                writer.WriteLine(@"#include ""XtdGearModels.hpp""");
                writer.WriteLine(@"#include ""XtdGearInfos.hpp""");
            }
        }

        public void WriteToSingle(TextWriter writer)
        {
            writer.WriteLine($"class XtdGearModels {{");
            foreach (var group in Models.GroupBy(m => m.ClassRoot).OrderBy(m => m.Key))
            {
                writer.WriteLine($"    class {group.Key} {{");
                foreach (var model in group.OrderBy(g => g.Name))
                {
                    model.WriteGearModelTo(writer, "        ");
                }
                writer.WriteLine($"  }};");
            }
            writer.WriteLine($"}};");
            writer.WriteLine($"class XtdGearInfos {{");
            foreach (var group in Models.GroupBy(m => m.ClassRoot).OrderBy(m => m.Key))
            {
                writer.WriteLine($"    class {group.Key} {{");
                foreach (var model in group.OrderBy(g => g.Name))
                {
                    model.WriteGearInfosTo(writer, "        ");
                }
                writer.WriteLine($"    }};");
            }
            writer.WriteLine($"}};");
        }

        public override string ToString()
        {
            var str = new StringWriter();
            WriteToSingle(str);
            return str.ToString();
        }
    }
}
