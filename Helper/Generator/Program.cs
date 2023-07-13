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
            var file = @"d:\Julien\Documents\Arma 3 Projects\amf_uniforms\config.json";
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
                }

                var hiddenSelections = uniform.set.Keys.Concat(uniform.variations.SelectMany(e => e.values.SelectMany(v => v.set.Keys))).Distinct().OrderBy(n => n).Concat(uniform.extra).ToList();
                ScanOptions(uniform, 0, hiddenSelections, uniform.set, new Dictionary<Variation, Value>());
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
            File.WriteAllText(Path.Combine(directory,"CfgVehicles.hpp"), string.Join("\r\n", vehicleConfig));
            File.WriteAllText(Path.Combine(directory, "CfgWeapons.hpp"), string.Join("\r\n", weaponConfig));
            File.WriteAllText(Path.Combine(directory, "CfgWeaponsNames.hpp"), Serialize(weaponNames));
        }

        private static GeneratorJson ReadConfig(string file)
        {
            using var reader = File.OpenRead(file);
            return JsonSerializer.Deserialize<GeneratorJson>(reader, new JsonSerializerOptions() { ReadCommentHandling = JsonCommentHandling.Skip })!;
        }

        private static void ScanOptions(Uniform uniform, int optionIndex, List<string> hiddenSelections, Dictionary<string, string> set, Dictionary<Variation, Value> state)
        {
            var currentOption = uniform.variations[optionIndex];
            foreach (var val in currentOption.values)
            {
                state[currentOption] = val;
                var x = set.Concat(val.set).ToDictionary(k => k.Key, k => k.Value);
                if (optionIndex + 1 != uniform.variations.Count)
                {
                    ScanOptions(uniform, optionIndex + 1, hiddenSelections, x, state);
                }
                else
                {
                    var hiddenSelectionsTextures = hiddenSelections.Select(name => Get(x, name)).ToList();
                    CreateUniform(uniform, hiddenSelections, hiddenSelectionsTextures, state);
                }
            }
        }

        private static void CreateUniform(Uniform uniform, List<string> hiddenSelections, List<string> hiddenSelectionsTextures, Dictionary<Variation, Value> state)
        {
            var label = ApplyPattern(uniform, uniform.label, state, v => v.label);
            var vehicle = ApplyPattern(uniform, uniform.vehicle, state, v => v.id);
            var weapon = ApplyPattern(uniform, uniform.weapon, state, v => v.id);

            var picture = state.Values.FirstOrDefault(v => v.picture != null)?.picture ?? uniform.picture;

            weaponNames.Add(weapon);

            vehicleConfig.Add($@"class {vehicle} : B_Soldier_F
{{
    scope=1;
    displayName=""{label}"";
    model=""{uniform.model}"";
    uniformClass=""{weapon}"";
    hiddenSelections[]={{{Serialize(hiddenSelections)}}};
    hiddenSelectionsTextures[]={{{Serialize(hiddenSelectionsTextures)}}};
}};");


            var xtdGearInfos = string.Empty;
            if (!string.IsNullOrEmpty(uniform.xtdModel))
            {
                var sb = new StringBuilder();
                sb.AppendLine();
                sb.AppendLine("    class XtdGearInfo");
                sb.AppendLine("    {");
                sb.AppendLine($"        model=\"{uniform.xtdModel}\";");
                if (uniform.xtdSet != null)
                {
                    foreach (var pair in uniform.xtdSet)
                    {
                        sb.AppendLine($"        {pair.Key}=\"{pair.Value}\";");
                    }
                    foreach (var opt in uniform.variations)
                    {
                        var val = state[opt];
                        sb.AppendLine($"        {opt.xtdId ?? opt.id}=\"{val.xtdId ?? val.id}\";");
                    }
                }
                sb.Append("    };");
                xtdGearInfos = sb.ToString();
            }



            weaponConfig.Add($@"class {weapon} : Uniform_Base
{{
    author=""{uniform.author}"";
    scope=2;
    displayName=""{label}"";
    picture=""{picture}"";
    model=""A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d"";
	hiddenSelections[]={{""camo""}};
	hiddenSelectionsTextures[]={{""A3\Characters_F\Common\Suitpacks\data\suitpack_soldier_blufor_co.paa""}};
    class ItemInfo : UniformItem
    {{
        uniformModel=""{uniform.model}"";
        uniformClass=""{vehicle}"";
        containerClass=""Supply30"";
        mass=30;
        passThrough=1;
    }};{xtdGearInfos}
}};");



        }

        private static string Serialize(List<string> values)
        {
            if (values.Count> 0)
            {
                return "\"" + string.Join("\",\"", values) + "\"";
            }
            return "";
        }

        private static string ApplyPattern(Uniform entry, string name, Dictionary<Variation, Value> state, Func<Value, string> get)
        {
            foreach (var opt in entry.variations)
            {
                name = name.Replace($"{{{opt.id}}}", get(state[opt]));
            }
            return name;
        }

        private static string Get(Dictionary<string, string> x, string name)
        {
            if (x.TryGetValue(name, out var val))
            { 
                return val;
            }
            return string.Empty;
        }
    }
}