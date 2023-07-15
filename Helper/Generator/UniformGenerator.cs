using System.Text;

namespace Generator
{
    internal class UniformGenerator
    {
        internal List<string> VehicleConfig { get; } = new List<string>();
        internal List<string> WeaponConfig { get; } = new List<string>();
        internal List<string> WeaponNames { get; } = new List<string>();

        private readonly Uniform uniform;
        private readonly GeneratorJson config;
        private readonly List<string> hiddenSelections;
        private readonly List<string> itemHiddenSelections;

        internal UniformGenerator(GeneratorJson config, Uniform uniform)
        {
            this.uniform = uniform;
            this.config = config;

            hiddenSelections = uniform.set.Keys.Concat(uniform.variations.SelectMany(e => e.values.SelectMany(v => v.set.Keys))).Distinct().OrderBy(n => n).Concat(uniform.extra).ToList();
            itemHiddenSelections = (uniform.itemSet?.Keys ?? Enumerable.Empty<string>()).Concat(uniform.variations.SelectMany(e => e.values.SelectMany(v => v.itemSet?.Keys ?? Enumerable.Empty<string>()))).Distinct().OrderBy(n => n).ToList();
            
            ScanOptions(0, 
                uniform.set ?? new Dictionary<string, string>(),
                uniform.itemSet ?? new Dictionary<string, string>(),
                new Dictionary<Variation, Value>());
        }


        private void ScanOptions(int optionIndex, Dictionary<string, string> vehicleSet, Dictionary<string, string> itemSet, Dictionary<Variation, Value> state)
        {
            var currentOption = uniform.variations[optionIndex];
            foreach (var val in currentOption.values)
            {
                state[currentOption] = val;
                var childVehicleTextures = Merge(vehicleSet, val.set);
                var childItemTextures = Merge(itemSet, val.itemSet);

                if (optionIndex + 1 != uniform.variations.Count)
                {
                    ScanOptions(optionIndex + 1, childVehicleTextures, childItemTextures, state);
                }
                else
                {
                    var vehicleTextures = hiddenSelections.Select(name => Get(childVehicleTextures, name)).ToList();
                    var itemTextures = itemHiddenSelections.Select(name => Get(childItemTextures, name)).ToList();
                    CreateUniform(vehicleTextures, itemTextures, state);
                }
            }
        }

        private static Dictionary<string, string> Merge(Dictionary<string, string> baseSet, Dictionary<string, string> valueSet)
        {
            if (valueSet == null)
            {
                return baseSet;
            }
            var newSet = new Dictionary<string, string>(baseSet);
            foreach(var pair in valueSet)
            {
                newSet[pair.Key] = pair.Value;
            }
            return newSet;
        }

        private void CreateUniform(List<string> vehicleTextures, List<string> itemTextures, Dictionary<Variation, Value> state)
        {
            var label = ApplyPattern(uniform, uniform.label, state, v => v.label);
            var vehicle = ApplyPattern(uniform, uniform.vehicle, state, v => v.id);
            var weapon = ApplyPattern(uniform, uniform.weapon, state, v => v.id);

            var picture = state.Values.FirstOrDefault(v => v.picture != null)?.picture ?? uniform.picture;

            WeaponNames.Add(weapon);

            VehicleConfig.Add($@"class {vehicle} : B_Soldier_F
{{
    scope=1;
    displayName=""{label}"";
    model=""{Expand(uniform.model)}"";
    uniformClass=""{weapon}"";
    hiddenSelections[]={{{Serialize(hiddenSelections)}}};
    hiddenSelectionsTextures[]={{{Serialize(vehicleTextures.Select(Expand))}}};
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

            WeaponConfig.Add($@"class {weapon} : Uniform_Base
{{
    author=""{uniform.author}"";
    scope=2;
    displayName=""{label}"";
    picture=""{Expand(picture)}"";
    model=""{Expand(uniform.itemModel)}"";
	hiddenSelections[]={{{Serialize(itemHiddenSelections)}}};
	hiddenSelectionsTextures[]={{{Serialize(itemTextures.Select(Expand))}}};
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

        private string Expand(string model)
        {
            foreach(var pair in config.paths)
            {
                model = model.Replace(pair.Key, pair.Value);
            }
            return model;
        }

        internal static string Serialize(IEnumerable<string> values)
        {
            if (values.Any())
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
