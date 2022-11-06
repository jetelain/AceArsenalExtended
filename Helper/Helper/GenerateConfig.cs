using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace Helper
{
    public class GenerateConfig
    {
        public static string NormalizeValue(string? v)
        {
            if (string.IsNullOrEmpty(v))
            {
                return "DEFAULT";
            }
            return v;
        }

        public GenerateConfig(DetectedConfigInfo config, List<string> optionNames, Dictionary<string, string?> dictionary)
        {
            Config = config;
            Options = optionNames.Select(name => new KeyValuePair<string, string>(name, NormalizeValue(dictionary.TryGetValue(name, out var value) ? value : null))).ToList();
        }

        public DetectedConfigInfo Config { get; }

        public List<KeyValuePair<string, string>> Options { get; }

        public void WriteTo(TextWriter writer, string indent = "")
        {
            writer.WriteLine($"{indent}class {Config.ClassName} {{");
            foreach(var opt in Options)
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