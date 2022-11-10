using System.Collections.Generic;
using System.Diagnostics;
using Helper.Detector;

namespace Helper
{
    [DebuggerDisplay("{Name}")]
    public class DetectedModelInfo
    {
        public string Name { get; set; }
        public string P3dModel { get; set; }
        public List<DetectedConfigInfo> Configs { get; set; }
        public List<DetectedHiddenSelection> HiddenSelections { get; set; }
        public string ClassRoot { get; set; }
        public List<string> FileNames { get; set; }
        public string PackageName { get; set; }
    }
}
