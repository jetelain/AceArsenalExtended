using System.Collections.Generic;
using System.Linq;
using Helper.Detector;

namespace Helper.Metadata
{
    public class HiddenSelectionMetadata
    {
        public int? Action { get; set; }

        public string? OptionName { get; set; }

        public string? OptionValue { get; set; }

        public List<HiddenSelectionValueMetadata> Values { get; set; } = new List<HiddenSelectionValueMetadata>();

        public HiddenSelectionValueMetadata GetMetadataFor(DetectedHiddenSelectionValue detected, List<DetectedConfigInfo> matching)
        {
            var entry = Values.FirstOrDefault(v => v.Value == detected.Value);
            if (entry == null)
            {
                entry = Values.FirstOrDefault(m => matching.Any(c => c.ClassName == m.FirstConfigClassName));
                if (entry == null)
                {
                    entry = new HiddenSelectionValueMetadata() { Value = detected.Value, FirstConfigClassName = matching.First().ClassName };
                    Values.Add(entry);
                }
            }
            if (entry.FirstConfigClassName == null)
            {
                entry.FirstConfigClassName = matching.First().ClassName;
            }
            return entry;
        }
    }
}