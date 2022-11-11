using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Helper.Detector;

namespace Helper
{
    public class GenerateConfig
    {
        private static Dictionary<string,string> ConventionalDefaultValue = new Dictionary<string, string>(StringComparer.OrdinalIgnoreCase) {
            { "kneepads", "no" }
        };

        public static string NormalizeValue(string name, string value)
        {
            if (string.IsNullOrEmpty(value))
            {
                if (ConventionalDefaultValue.TryGetValue(name, out var defaultValue))
                {
                    return defaultValue;
                }
                return "none";
            }
            return value;
        }

        public GenerateConfig(GenerateModel model, DetectedConfigInfo config, List<string> optionNames, Dictionary<string, string?> dictionary)
        {
            Model = model;
            Config = config;
            Options = optionNames.Select(name => new KeyValuePair<string, string>(name, NormalizeValue(name, dictionary.TryGetValue(name, out var value) ? value : null))).ToList();
        }

        public GenerateModel Model { get; }

        public DetectedConfigInfo Config { get; }

        public List<KeyValuePair<string, string>> Options { get; }

        public bool HasConflict => ConflictWith != null && ConflictWith != Config;

        public DetectedConfigInfo ConflictWith { get; set; }

        public void WriteTo(TextWriter writer, string indent = "")
        {
            if (HasConflict)
            {
                indent = indent + "//";
                writer.WriteLine($"{indent}Conflict with {ConflictWith.ClassName}");
            }
            writer.WriteLine($"{indent}class {Config.ClassName} {{");
            writer.WriteLine($@"{indent}  model = ""{Model.Name}"";");
            foreach (var opt in Options)
            {
                writer.WriteLine($@"{indent}  {opt.Key} = ""{opt.Value}"";");
            }
            writer.WriteLine($"{indent}}};");
        }

        public override string ToString()
        {
            var str = new StringWriter();
            WriteTo(str);
            return str.ToString();
        }

    }
}