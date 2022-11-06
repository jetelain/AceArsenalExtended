using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace Helper
{
    public class GenerateXtdConfig
    {
        public GenerateXtdConfig(IEnumerable<IDetectedModelMapper> all)
        {
            Models = all.GroupBy(m => m.ModelName.ToLowerInvariant()).Select(m => new GenerateModel(m.ToList())).ToList();
        }

        public List<GenerateModel> Models { get; }

        public void WriteXtdGearModelsTo(TextWriter writer, string indent = "")
        {
            writer.WriteLine($"{indent}class XtdGearModels {{");
            foreach(var group in Models.GroupBy(m => m.ClassRoot).OrderBy(m => m.Key))
            {
                writer.WriteLine($"{indent}  class {group.Key} {{");
                foreach(var model in group.OrderBy(g => g.Name))
                {
                    model.WriteGearModelTo(writer, indent+ "    ");
                }
                writer.WriteLine($"{indent}  }};");
            }
            writer.WriteLine($"{indent}}};");
        }

        public void WriteXtdGearInfosTo(TextWriter writer, string indent = "")
        {
            writer.WriteLine($"{indent}class XtdGearInfos {{");
            foreach (var group in Models.GroupBy(m => m.ClassRoot).OrderBy(m => m.Key))
            {
                writer.WriteLine($"{indent}  class {group.Key} {{");
                foreach (var model in group.OrderBy(g => g.Name))
                {
                    model.WriteGearInfosTo(writer, indent + "    ");
                }
                writer.WriteLine($"{indent}  }};");
            }
            writer.WriteLine($"{indent}}};");
        }

        public override string ToString()
        {
            var str = new StringWriter();
            WriteXtdGearModelsTo(str);
            WriteXtdGearInfosTo(str);
            return str.ToString();
        }
    }
}
