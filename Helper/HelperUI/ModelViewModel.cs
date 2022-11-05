using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Windows;
using Helper;

namespace HelperUI
{
    public class ModelViewModel : INotifyPropertyChanged
    {
        private readonly MetadataService metadataService;

        public ModelMetadata Metadata { get; }

        internal ModelViewModel(DetectedModelInfo m, MetadataService metadataService)
        {
            Detected = m;
            Count = m.Configs.Count;
            this.metadataService = metadataService;
            Metadata = metadataService.GetMetadataFor(m);
            HiddenSelections = m.HiddenSelections.Select(h => new HiddenSelectionViewModel(this, h)).ToList();
            Conflicts = ComputeConflicts();
        }

        public DetectedModelInfo Detected { get; }

        public int Count { get; }


        public List<HiddenSelectionViewModel> HiddenSelections { get; }

        public string CountLabel => $"{Count} configs";

        public string Name => Detected.Name;

        public event PropertyChangedEventHandler? PropertyChanged;

        public List<string> Conflicts { get; set; }

        public void Check()
        {
            Conflicts = ComputeConflicts();
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(StatusOK)));
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(StatusKO)));
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(StatusKODetails)));
            if(Conflicts.Count == 0)
            {
                metadataService.Save();
            }
        }

        public List<string> ComputeConflicts()
        {
            var optionsAsDict = Detected.Configs.Select(c => new { Config = c, Options = GetOptions(c) }).ToList();
            var optionsNames = optionsAsDict.SelectMany(c => c.Options.Keys).Distinct().ToList();
            var optionsAsArray = optionsAsDict.Select(c => new { c.Config, Options = optionsNames.Select(name => NormalizeValue(c.Options.TryGetValue(name, out var value) ? value : null)).ToArray() }).ToList();
            var known = new Dictionary<string[], DetectedConfigInfo>(new StringArrayEqualityComparer());
            var conflicts = new List<string>();
            foreach (var option in optionsAsArray)
            {
                if (known.TryGetValue(option.Options, out var conflict))
                {
                    var sb = new StringBuilder($"{option.Config.ClassName} with {conflict.ClassName}");

                    for (int i = 0; i < optionsNames.Count; i++)
                    {
                        sb.Append($"\r\n  {optionsNames[i]}={option.Options[i]}");
                    }

                    conflicts.Add(sb.ToString());
                }
                else
                {
                    known[option.Options] = option.Config;
                }
            }
            return conflicts;
        }

        public Visibility StatusOK => Conflicts.Count == 0 ? Visibility.Visible : Visibility.Collapsed;

        public Visibility StatusKO => Conflicts.Count > 0 ? Visibility.Visible : Visibility.Collapsed;

        public string StatusKODetails => $"{Conflicts.Count} conflict(s):\r\n{string.Join("\r\n", Conflicts.Take(5))}{(Conflicts.Count > 5?"\r\n(Display limited to 5 conflicts)":"")}";

        private string NormalizeValue(string? v)
        {
            if (string.IsNullOrEmpty(v))
            {
                return "DEFAULT";
            }
            return v;
        }

        private Dictionary<string,string?> GetOptions(DetectedConfigInfo config)
        {
            var options = new Dictionary<string,string?>();
            foreach(var selection in HiddenSelections)
            {
                selection.AddToOptionValue(config, options);
            }
            return options;
        }
    }
}