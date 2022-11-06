using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace Helper
{
    public class GenerateModel
    {
        public GenerateModel(List<IDetectedModelMapper> withSameName)
        {
            Name = withSameName[0].ModelName;
            Label = Name;
            ClassRoot = withSameName[0].Detected.ClassRoot;

            var optionNames = withSameName.SelectMany(o => o.GetAllOptionNames()).Distinct(StringComparer.OrdinalIgnoreCase).ToList();
            optionNames.Sort();
            foreach (var dmodel in withSameName)
            {
                foreach (var config in dmodel.Detected.Configs)
                {
                    Configs.Add(new GenerateConfig(config, optionNames, dmodel.GetAllOptions(config)));
                }
            }
            for (int i = 0; i < optionNames.Count; ++i)
            {
                var name = optionNames[i];
                var values = Configs.Select(c => c.Options[i].Value).Distinct().ToList();
                values.Sort();
                Options.Add(new GenerateOption(name, values));
            }
        }

        public string Name { get; }
        public string Label { get; set; }
        public string ClassRoot { get; }
        public List<GenerateOption> Options { get; } = new List<GenerateOption>();
        public List<GenerateConfig> Configs { get; } = new List<GenerateConfig>();

        public void WriteGearModelTo(TextWriter writer, string indent = "")
        {
            writer.WriteLine($"{indent}class {Name} {{");
            writer.WriteLine($@"{indent}  label = ""{Label}"";");
            writer.WriteLine($@"{indent}  options[] = {{ ""{string.Join("\", \"", Options.Select(o => o.Name))}"" }};");
            foreach (var opt in Options)
            {
                opt.WriteTo(writer, indent + "  ");
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
    }
}
