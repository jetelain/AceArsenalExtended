using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Windows;
using Helper;
using Helper.Generator;
using Helper.Metadata;

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
            var models = GetGenerateData().Models;

            ConflictCount = models.Sum(m => m.ConflictCount);
            ModelsWithConflicts = models.Where(m => m.ConflictCount > 0).ToList();

            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(StatusOK)));
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(StatusKO)));
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(StatusKODetails)));
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(ModelsWithConflicts)));
        }

        public Visibility StatusOK => ConflictCount == 0 ? Visibility.Visible : Visibility.Collapsed;

        public Visibility StatusKO => ConflictCount > 0 ? Visibility.Visible : Visibility.Collapsed;

        public string StatusKODetails => $"{ConflictCount} conflict(s)";

        public int ConflictCount { get; private set; }

        public List<GenerateModel> ModelsWithConflicts { get; set; } = new List<GenerateModel>();

        public GenerateXtdConfig GetGenerateData()
        {
            return new GenerateXtdConfig(Models.Where(m => m.Action != ModelAction.Ignore));
        }
    }
}
