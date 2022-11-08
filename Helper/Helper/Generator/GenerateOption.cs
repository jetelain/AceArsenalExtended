using System;
using System.Collections.Generic;
using System.IO;

namespace Helper
{
    public class GenerateOption
    {
        private static HashSet<string> IsConventional = new HashSet<string>(StringComparer.OrdinalIgnoreCase) { 
            "camo", 
            "sleeves",
            "gloves",
            "pantscamo",
            "faction"
        };

        public GenerateOption(string name, List<string> values)
        {
            Name = name;
            Values = values;
        }

        public string Name { get; }

        public List<string> Values { get; }

        public void WriteTo(TextWriter writer, string indent = "")
        {
            writer.WriteLine($"{indent}class {Name} {{");
            if (!IsConventional.Contains(Name))
            {
                writer.WriteLine($@"{indent}  label = ""{Name}"";");
            }
            writer.WriteLine($@"{indent}  values[] = {{ ""{string.Join("\", \"", Values)}"" }};");
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