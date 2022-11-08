using System.Diagnostics;

namespace Helper
{
    [DebuggerDisplay("{SuggestedName}")]
    public class DetectedHiddenSelectionValue
    {
        public string Value { get; set; }
        public string SuggestedName { get; set; }
    }
}
