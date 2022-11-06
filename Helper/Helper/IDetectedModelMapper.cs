using System.Collections.Generic;

namespace Helper
{
    public interface IDetectedModelMapper
    {
        IEnumerable<string> GetAllOptionNames();
        Dictionary<string, string> GetAllOptions(DetectedConfigInfo config);
        DetectedModelInfo Detected { get; }
        string ModelName { get; }
    }
}
