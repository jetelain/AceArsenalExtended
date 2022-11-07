using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Printing;
using System.Text;
using System.Threading.Tasks;
using Helper;

namespace HelperUI
{
    internal class RootViewModel : INotifyPropertyChanged
    {
        public RootViewModel(MetadataService metadataService)
        {
            MetadataService = metadataService;
        }

        public MetadataService MetadataService { get; }

        public List<ModelViewModel> Models { get; } = new List<ModelViewModel>();

        public event PropertyChangedEventHandler? PropertyChanged;

        public void Load(string[] files, Action<string> progress)
        {
            var rawdata = ModelDetector.Detect(files, progress);

            progress("Check data");

            MetadataService.Initialize(System.IO.Path.Combine(System.IO.Path.GetDirectoryName(files[0]) ?? string.Empty, "aceax.json"));

            Models.AddRange(rawdata.Select(m => new ModelViewModel(m, this)));

            foreach (var models in Models.Where(m => m.Action != ModelAction.Ignore).GroupBy(m => m.ModelName, StringComparer.OrdinalIgnoreCase))
            {
                new ModelGroup(this, models).Init();
            }

            Update();

            progress("Done");
        }

        public void Update()
        {
            ConflictCount = GetGenerateData().Models.Sum(m => m.ConflictCount);

            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(ConflictStatus)));
        }

        public string ConflictStatus => ConflictCount == 0 ? "Everything seems OK" : $"{ConflictCount} conflict(s) detected";

        public int ConflictCount { get; private set; }

        public GenerateXtdConfig GetGenerateData()
        {
            return new GenerateXtdConfig(Models.Where(m => m.Action != ModelAction.Ignore));
        }
    }
}
