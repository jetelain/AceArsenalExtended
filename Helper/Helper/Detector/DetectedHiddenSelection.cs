using System.Collections.Generic;
using System.Diagnostics;

namespace Helper
{
    [DebuggerDisplay("{Name}")]
    public class DetectedHiddenSelection
    {
        public string Name { get; set; }
        public List<DetectedHiddenSelectionValue> Values { get; set; }
    }
}
