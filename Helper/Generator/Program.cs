using System.Text;
using System.Text.Json;
using System.Threading.Tasks.Dataflow;
using System.Xml.Linq;

namespace Generator
{
    internal class Program
    {
        private static readonly List<string> vehicleConfig = new List<string>();
        private static readonly List<string> weaponConfig = new List<string>();
        private static readonly List<string> weaponNames = new List<string>();

        static void Main(string[] args)
        {
            var file = @"amf_uniforms.json";
            var directory = Path.GetDirectoryName(file) ?? Environment.CurrentDirectory;
            var config = ReadConfig(file);
            foreach (var uniform in config.uniforms)
            {
                if (!string.IsNullOrEmpty(uniform.sameAs))
                {
                    var sameAs = config.uniforms.First(m => m.model == uniform.sameAs);
                    uniform.variations = uniform.variations ?? sameAs.variations;
                    uniform.set = uniform.set ?? sameAs.set;
                    uniform.extra = uniform.extra ?? sameAs.extra;
                    uniform.author = uniform.author ?? sameAs.author;
                    uniform.xtdModel = uniform.xtdModel ?? sameAs.xtdModel;
                    uniform.xtdSet = uniform.xtdSet ?? sameAs.xtdSet;
                    uniform.itemModel = uniform.itemModel ?? sameAs.itemModel;
                    uniform.itemSet = uniform.itemSet ?? sameAs.itemSet;
                }

                var generated = new UniformGenerator(config, uniform);
                vehicleConfig.AddRange(generated.VehicleConfig);
                weaponConfig.AddRange(generated.WeaponConfig);
                weaponNames.AddRange(generated.WeaponNames);
            }
            foreach (var pair in config.legacy)
            {
                if (!weaponNames.Contains(pair.Value))
                {
                    Console.WriteLine($"'{pair.Value}' does not exists !");
                }
                else
                {
                    weaponNames.Add(pair.Key);
                    weaponConfig.Add($"class {pair.Key} : {pair.Value} {{ scope=1; islegacy=1; }};");
                }
            }
            File.WriteAllLines(Path.Combine(directory,"CfgVehicles.hpp"), vehicleConfig);
            File.WriteAllLines(Path.Combine(directory, "CfgWeapons.hpp"), weaponConfig);
            File.WriteAllText(Path.Combine(directory, "CfgWeaponsNames.hpp"), UniformGenerator.Serialize(weaponNames));
        }

        private static GeneratorJson ReadConfig(string file)
        {
            using var reader = File.OpenRead(file);
            return JsonSerializer.Deserialize<GeneratorJson>(reader, new JsonSerializerOptions() { ReadCommentHandling = JsonCommentHandling.Skip })!;
        }

    }
}