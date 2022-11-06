using System.Linq;
using Helper;

namespace HelperUI
{
    public class HiddenSelectionValueViewModel
    {
        private string valueName;

        public HiddenSelectionValueViewModel(HiddenSelectionViewModel parent, DetectedHiddenSelectionValue detected)
        {
            Metadata = parent.Metadata.GetMetadataFor(detected);
            Parent = parent;
            Detected = detected;
            valueName = Metadata.ValueName ?? detected.SuggestedName;
            var matching = Parent.Parent.Detected.Configs.Where(c => c.GetHiddenSelection(Parent.Name) == detected.Value).ToList();
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
                Parent.Parent.Check(); 
            } 
        }

        public string CountLabel { get; }
    }
}