using System.Collections.Generic;
using System.Diagnostics;

namespace Helper
{
    [DebuggerDisplay("{Name}")]
    public class DetectedModelInfo
    {
        public string Name { get; set; }
        public string P3dModel { get; set; }
        public List<DetectedConfigInfo> Configs { get; set; }
        public List<DetectedHiddenSelection> HiddenSelections { get; internal set; }
    }
}
