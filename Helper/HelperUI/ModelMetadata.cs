using System;
using System.Collections.Generic;
using Helper;

namespace HelperUI
{
    public class ModelMetadata
    {
        public string P3dModel { get; set; }
        public string ClassRoot { get; set; }
        public string Name { get; set; }
        public string FirstConfigClassName { get; set; }
        public int? Action { get; set; }
        public string? ModelName { get; set; }
        public Dictionary<string, HiddenSelectionMetadata> HiddenSelections { get; set; } = new Dictionary<string, HiddenSelectionMetadata>();
        public Dictionary<string, string> GapOptions { get; set; } = new Dictionary<string, string>();
        public Dictionary<string, string> ExplicitOptions { get; set; } = new Dictionary<string, string>();

        internal HiddenSelectionMetadata GetMetadataFor(DetectedHiddenSelection detected)
        {
            if (!HiddenSelections.TryGetValue(detected.Name, out var hiddenSelectionMetadata))
            {
                hiddenSelectionMetadata = new HiddenSelectionMetadata();
                HiddenSelections.Add(detected.Name, hiddenSelectionMetadata);
            }
            return hiddenSelectionMetadata;
        }
    }
}