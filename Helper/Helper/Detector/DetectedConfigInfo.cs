using System.Collections.Generic;
using System.Diagnostics;

namespace Helper.Detector
{
    [DebuggerDisplay("{ClassName}")]
    public class DetectedConfigInfo
    {
        public string ClassRoot { get; set; }
        public string ClassName { get; set; }
        public string P3dModel { get; set; }
        public Dictionary<string, string> HiddenSelections { get; set; } = new Dictionary<string, string>();
        public string DisplayName { get; set; }
        public string FileName { get; set; }
        public string Definition { get; internal set; }

        public string GetHiddenSelection(string name) => HiddenSelections.TryGetValue(name, out var v) ? v : null;
    }
}
