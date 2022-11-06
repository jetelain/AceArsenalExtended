using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Windows;
using Helper;

namespace HelperUI
{
    public class ModelViewModel : INotifyPropertyChanged, IDetectedModelMapper
    {
        private readonly MetadataService metadataService;
        private readonly List<ModelViewModel> models;

        private ModelAction action;
        private string modelName;

        public ModelMetadata Metadata { get; }

        internal ModelViewModel(DetectedModelInfo m, MetadataService metadataService, List<ModelViewModel> models)
        {
            this.metadataService = metadataService;
            this.models = models;
            Detected = m;
            Count = m.Configs.Count;
            Metadata = metadataService.GetMetadataFor(m);
            HiddenSelections = m.HiddenSelections.Select(h => new HiddenSelectionViewModel(this, h)).ToList();
            Conflicts = ComputeConflicts();
            modelName = Metadata.ModelName ?? Detected.Name;

            if (Metadata.Action != null)
            {
                action = ModelAction.Values[Metadata.Action.Value];
            }
            else
            {
                action = ModelAction.MapToModel;
            }
        }

        public DetectedModelInfo Detected { get; }

        public int Count { get; }


        public List<HiddenSelectionViewModel> HiddenSelections { get; }

        public string CountLabel => $"{Count} configs";

        public string Name => Detected.Name;

        public ObservableCollection<ModelOptionsViewModel> Options { get; } = new ObservableCollection<ModelOptionsViewModel>();

        public event PropertyChangedEventHandler? PropertyChanged;

        public List<string> Conflicts { get; set; }

        public void Check()
        {
            Conflicts = ComputeConflicts();
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(StatusOK)));
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(StatusKO)));
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(StatusKODetails)));
            if (Conflicts.Count == 0)
            {
                metadataService.Save();
            }
            UpdateAllModelLevelOptions();
        }

        public List<string> ComputeConflicts()
        {
            var optionsAsDict = Detected.Configs.Select(c => new { Config = c, Options = GetOptions(c) }).ToList();
            var optionsNames = optionsAsDict.SelectMany(c => c.Options.Keys).Distinct().ToList();
            var optionsAsArray = optionsAsDict.Select(c => new { c.Config, Options = optionsNames.Select(name => GenerateConfig.NormalizeValue(c.Options.TryGetValue(name, out var value) ? value : null)).ToArray() }).ToList();
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



        private Dictionary<string,string?> GetOptions(DetectedConfigInfo config)
        {
            var options = new Dictionary<string,string?>(StringComparer.OrdinalIgnoreCase);
            foreach(var selection in HiddenSelections)
            {
                selection.AddToOptionValue(config, options);
            }
            return options;
        }

        public Dictionary<string, string?> GetAllOptions(DetectedConfigInfo config)
        {
            var options = new Dictionary<string, string?>(StringComparer.OrdinalIgnoreCase);
            foreach (var opt in Options)
            {
                options[opt.Name] = opt.Value;
            }
            foreach (var selection in HiddenSelections)
            {
                selection.AddToOptionValue(config, options);
            }
            return options;
        }

        public ModelAction Action
        {
            get { return action; }
            set
            {
                this.action = value;
                PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(ShowConfig)));
                SetMetadata();
            }
        }

        public Visibility ShowConfig => action != ModelAction.Ignore ? Visibility.Visible : Visibility.Collapsed;

        public void SetMetadata()
        {
            UpdateAllModelLevelOptions();

            Metadata.Action = action.Code;
            Metadata.ModelName = modelName;
            Metadata.GapOptions = Options.Where(o => !o.IsEditable).ToDictionary(o => o.Name, o => o.Value, StringComparer.OrdinalIgnoreCase);
            Metadata.ExplicitOptions = Options.Where(o => o.IsEditable && !o.CanBeIgnored).ToDictionary(o => o.Name, o => o.Value, StringComparer.OrdinalIgnoreCase);
            metadataService.Save();
        }

        public void UpdateAllModelLevelOptions()
        {
            var withSameName = GetWithSameName();
            foreach (var model in withSameName)
            {
                model.ComputeModelLevelOptions(withSameName, false);
            }
        }

        public void InitModelLevelOptions()
        {
            ComputeModelLevelOptions(GetWithSameName(), true);
        }

        private List<ModelViewModel> GetWithSameName()
        {
            return models.Where(m => m.Action != ModelAction.Ignore && string.Equals(m.ModelName, ModelName)).ToList();
        }

        public IEnumerable<string> GetOptionNames()
        {
            return HiddenSelections.Where(h => h.Action != HiddenSelectionAction.Ignore).Select(h => h.OptionName).Distinct(StringComparer.OrdinalIgnoreCase);
        }

        public IEnumerable<string> GetAllOptionNames()
        {
            return GetOptionNames().Concat(Options.Where(o => !string.IsNullOrEmpty(o.Name)).Select(o => o.Name));
        }

        public void ComputeModelLevelOptions(List<ModelViewModel> withSameName, bool isInitial)
        {
            if (withSameName.Count > 1)
            {
                var thisOptions    = GetOptionNames().ToList();
                var allBaseOptions = withSameName.SelectMany(o => o.GetOptionNames()).Distinct(StringComparer.OrdinalIgnoreCase).ToList();
                var allOptions     = withSameName.SelectMany(o => o.GetAllOptionNames()).Distinct(StringComparer.OrdinalIgnoreCase).ToList();
                var missingOptions = allOptions.Where(o => !thisOptions.Contains(o, StringComparer.OrdinalIgnoreCase)).ToList();

                foreach(var missingOption in missingOptions)
                {
                    var vm = Options.FirstOrDefault(m => string.Equals(m.Name, missingOption, StringComparison.OrdinalIgnoreCase));
                    if (vm == null)
                    {
                        Options.Add(vm = new ModelOptionsViewModel(this, missingOption, true, 
                            Metadata.GapOptions.TryGetValue(missingOption, out var value) || Metadata.ExplicitOptions.TryGetValue(missingOption, out value) ? value : string.Empty));
                    }
                    vm.IsAutomatic = true;
                    vm.IsEditable = !allBaseOptions.Contains(missingOption, StringComparer.OrdinalIgnoreCase);
                }

                var cleanup = Options.Where(o => o.IsAutomatic ? !missingOptions.Contains(o.Name, StringComparer.OrdinalIgnoreCase) : o.CanBeIgnored).ToList();
                foreach(var other in cleanup)
                {
                    Options.Remove(other);
                }
                if (Options.Count == 0)
                {
                    if (isInitial && Metadata.ExplicitOptions.Count > 0)
                    {
                        foreach (var pair in Metadata.ExplicitOptions)
                        {
                            Options.Add(new ModelOptionsViewModel(this, pair.Key, false, pair.Value));
                        }
                    }
                    else
                    {
                        Options.Add(new ModelOptionsViewModel(this, "otherOption", false, string.Empty));
                    }
                }
            }
            else if (Options.Count > 0)
            {
                Options.Clear();
            }
        }

        public string ModelName
        {
            get { return modelName; }
            set
            {
                modelName = value;
                if (action != ModelAction.Ignore)
                {
                    SetMetadata();
                }
            }
        }
    }
}