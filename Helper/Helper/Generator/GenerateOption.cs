using System;
using System.Collections.Generic;
using System.IO;
using System.Threading.Tasks.Dataflow;
using BIS.Core.Config;

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

        public void WriteTo(TextWriter writer, string indent = "", ParamClass incremental = null)
        {
            writer.WriteLine($"{indent}class {Name}");
            writer.WriteLine($"{indent}{{");
            if (!IsConventional.Contains(Name) && incremental == null)
            {
                writer.WriteLine($@"{indent}    label = ""{Name}"";");
            }
            writer.WriteLine($@"{indent}    values[] = {{ ""{string.Join("\", \"", Values)}"" }}; // Always computed, do not edit");
            if (incremental != null)
            {
                // in incremental mode, take everything except values
                foreach(var item in incremental.Entries)
                {
                    if(item.Name != "values")
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
            WriteTo(str);
            return str.ToString();
        }
    }
}