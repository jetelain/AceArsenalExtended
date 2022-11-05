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

        public Dictionary<string, HiddenSelectionMetadata> HiddenSelections { get; set; } = new Dictionary<string, HiddenSelectionMetadata>();

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