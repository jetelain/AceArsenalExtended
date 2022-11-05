using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Documents;
using Helper;

namespace HelperUI
{
    public class HiddenSelectionMetadata
    {
        public int? Action { get; set; }

        public string? OptionName { get; set; }

        public string? OptionValue { get; set; }

        public List<HiddenSelectionValueMetadata> Values { get; set; } = new List<HiddenSelectionValueMetadata>();

        internal HiddenSelectionValueMetadata GetMetadataFor(DetectedHiddenSelectionValue detected)
        {
            if (!string.IsNullOrEmpty(detected.Value) && detected.Value.Any(c => c > 256)) // TODO: obfuscated, find a reliable way to match
            {
                return new HiddenSelectionValueMetadata();
            }
            var entry = Values.FirstOrDefault(v => v.Value == detected.Value);
            if (entry == null)
            {
                entry = new HiddenSelectionValueMetadata() { Value = detected.Value };
                Values.Add(entry);
            }
            return entry;
        }
    }
}