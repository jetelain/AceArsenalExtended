using System.Linq;
using Helper;
using Helper.Metadata;

namespace HelperUI
{
    public class HiddenSelectionValueViewModel
    {
        private string valueName;

        public HiddenSelectionValueViewModel(HiddenSelectionViewModel parent, DetectedHiddenSelectionValue detected)
        {
            Parent = parent;
            Detected = detected;

            var matching = Parent.Parent.Detected.Configs.Where(c => c.GetHiddenSelection(Parent.Name) == detected.Value).ToList();
            Metadata = parent.Metadata.GetMetadataFor(detected, matching);
            valueName = Metadata.ValueName ?? detected.SuggestedName;
            CountLabel = $"{matching.Count} configs: {string.Join(", ", matching.Take(5).Select(m => m.ClassName))}{(matching.Count > 5 ? "...":"")}";
        }

        public HiddenSelectionValueMetadata Metadata { get; }
        public HiddenSelectionViewModel Parent { get; }

        public DetectedHiddenSelectionValue Detected { get; }

        public string ValueLabel
        {
            get
            {
                if (Detected.Value == null)
                {
                    return "(default value from p3d)";
                }
                if (Detected.Value == string.Empty)
                { 
                    return "(empty)"; 
                }
                return Detected.Value;
            }
        }

        public string ValueName 
        { 
            get { return valueName; } 
            set 
            { 
                valueName = value;
                Metadata.ValueName = valueName;
                Parent.Parent.MappedOptionNameOrValueChange(); 
            } 
        }

        public string CountLabel { get; }
    }
}