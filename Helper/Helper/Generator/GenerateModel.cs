using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using BIS.Core.Config;

namespace Helper
{
    public class GenerateModel
    {
        public GenerateModel(List<IDetectedModelMapper> withSameName)
        {
            Name = withSameName[0].ModelName;
            Label = NameHelper.LargestCommon(withSameName.SelectMany(m => m.Detected.Configs).Select(m => m.DisplayName)).Trim(' ', '(');
            if (string.IsNullOrEmpty(Label))
            {
                Label = Name;
            }
            ClassRoot = withSameName[0].Detected.ClassRoot;
            PackageName = NameHelper.LargestCommonStart(withSameName.Select(m => m.Detected.PackageName));
            FileNames = withSameName.SelectMany(m => m.Detected.FileNames).Distinct().ToList();

            var optionNames = withSameName.SelectMany(o => o.GetAllOptionNames()).Distinct(StringComparer.OrdinalIgnoreCase).ToList();
            optionNames.Sort();
            foreach (var dmodel in withSameName)
            {
                foreach (var config in dmodel.Detected.Configs)
                {
                    Configs.Add(new GenerateConfig(this, config, optionNames, dmodel.GetAllOptions(config)));  ;
                }
            }
            for (int i = 0; i < optionNames.Count; ++i)
            {
                var name = optionNames[i];
                var values = Configs.Select(c => c.Options[i].Value).Distinct().ToList();
                values.Sort();
                Options.Add(new GenerateOption(name, values));
            }

            var known = new Dictionary<string[], GenerateConfig>(new StringArrayEqualityComparer());
            foreach(var config in Configs)
            {
                var key = config.Options.Select(o => o.Value).ToArray();
                if (known.TryGetValue(key, out var conflict))
                {
                    conflict.ConflictWith = conflict.Config;
                    config.ConflictWith = conflict.Config;
                    ConflictCount++;
                }
                else
                {
                    known[key] = config;
                }
            }

        }

        public string Name { get; }
        public string Label { get; set; }
        public string ClassRoot { get; }
        public string PackageName { get; }
        public List<string> FileNames { get; }
        public List<GenerateOption> Options { get; } = new List<GenerateOption>();
        public List<GenerateConfig> Configs { get; } = new List<GenerateConfig>();
        public int ConflictCount { get; }

        public void WriteGearModelTo(TextWriter writer, string indent = "", ParamClass incremental = null)
        {
            writer.WriteLine($"{indent}class {Name}");
            writer.WriteLine($"{indent}{{");
            writer.WriteLine($@"{indent}    options[] = {{ ""{string.Join("\", \"", Options.Select(o => o.Name))}"" }}; // Always computed, do not edit");
            if (incremental != null)
            {
                foreach (var item in incremental.Entries.OfType<ParamValue>().Cast<ParamEntry>().Concat(incremental.Entries.OfType<ParamArray>()))
                {
                    if (item.Name != "options")
                    {
                        writer.WriteLine(item.ToString((indent.Length / 4) + 1));
                    }
                }
            }
            else
            {
                writer.WriteLine($@"{indent}    label = ""{Label}"";");
            }
            foreach (var opt in Options)
            {
                opt.WriteTo(writer, indent + "    ", incremental?.Get<ParamClass>(opt.Name)?.FirstOrDefault());
            }
            if (incremental != null)
            {
                foreach (var item in incremental.Entries.OfType<ParamClass>())
                {
                    if (!Options.Any(o => o.Name == item.Name))
                    {
                        writer.WriteLine(item.ToString((indent.Length / 4) + 1));
                    }
                }
            }
            writer.WriteLine($"{indent}}};");
        }

        public override string ToString()
        {
            var str = new StringWriter();
            WriteGearModelTo(str);
            return str.ToString();
        }

        internal void WriteGearInfosTo(TextWriter writer, string indent)
        {
            foreach (var config in Configs)
            {
                config.WriteTo(writer, indent);
            }
        }

        public void WriteCSV(StreamWriter writer)
        {
            writer.Write("Label;Class");
            foreach (var opt in Options)
            {
                writer.Write(";");
                writer.Write(opt.Name);
            }
            writer.Write(";Conflict");
            writer.WriteLine();
            foreach(var config in Configs)
            {
                writer.Write(config.Config.DisplayName.Replace(';',' '));
                writer.Write(";");
                writer.Write(config.Config.ClassName);
                foreach (var opt in config.Options)
                {
                    writer.Write(";");
                    writer.Write(opt.Value);
                }
                writer.Write(";");
                if (config.ConflictWith != null)
                {
                    writer.Write(config.ConflictWith.ClassName);
                }
                writer.WriteLine();
            }
        }
    }
}
