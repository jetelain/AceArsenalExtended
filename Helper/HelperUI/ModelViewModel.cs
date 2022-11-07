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
        private readonly RootViewModel root;

        private ModelAction action;
        private string modelName;

        public ModelMetadata Metadata { get; }

        public AddOptionCommand AddOption { get; }

        internal ModelViewModel(DetectedModelInfo m, RootViewModel root)
        {
            this.root = root;
            Detected = m;
            Count = m.Configs.Count;
            Metadata = root.MetadataService.GetMetadataFor(m);
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

            AddOption = new AddOptionCommand(this);
        }

        public DetectedModelInfo Detected { get; }

        public int Count { get; }

        public bool IsGroup { get; set; }

        public List<HiddenSelectionViewModel> HiddenSelections { get; }

        public string CountLabel => $"{Count} configs";

        public string Name => Detected.Name;

        public ObservableCollection<ModelOptionsViewModel> Options { get; } = new ObservableCollection<ModelOptionsViewModel>();

        public event PropertyChangedEventHandler? PropertyChanged;

        public List<string> Conflicts { get; set; }

        public void MappedOptionNameOrValueChange()
        {
            GetGroup().UpdateOptions();

            Conflicts = ComputeConflicts();
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(StatusOK)));
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(StatusKO)));
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(StatusKODetails)));

            root.Update();

            root.MetadataService.Save();
        }

        public List<string> ComputeConflicts()
        {
            var optionsAsDict = Detected.Configs.Select(c => new { Config = c, Options = GetOptions(c) }).ToList();
            var optionsNames = optionsAsDict.SelectMany(c => c.Options.Keys).Distinct().ToList();
            var optionsAsArray = optionsAsDict.Select(c => new { c.Config, Options = optionsNames.Select(name => GenerateConfig.NormalizeValue(name, c.Options.TryGetValue(name, out var value) ? value : null)).ToArray() }).ToList();
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

        public string StatusKODetails => $"{Conflicts.Count} conflict(s)";

        /*:\r\n{string.Join("\r\n", Conflicts.Take(5))}{(Conflicts.Count > 5?"\r\n(Display limited to 5 conflicts)":"")}*/

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
                if (!opt.CanBeIgnored)
                {
                    options[opt.Name] = opt.Value;
                }
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
                SetMetadataAndSave();
            }
        }

        public Visibility ShowConfig => action != ModelAction.Ignore ? Visibility.Visible : Visibility.Collapsed;

        public void SetMetadataAndSave()
        {
            GetGroup().UpdateOptions();

            SetMetadataOnly();

            root.Update();

            root.MetadataService.Save();
        }

        public void SetMetadataOnly()
        {
            Metadata.Action = action.Code;
            Metadata.ModelName = modelName;
            Metadata.GapOptions = Options.Where(o => !o.IsEditable).ToDictionary(o => o.Name, o => o.Value, StringComparer.OrdinalIgnoreCase);
            Metadata.ExplicitOptions = Options.Where(o => o.IsEditable && !o.CanBeIgnored).ToDictionary(o => o.Name, o => o.Value, StringComparer.OrdinalIgnoreCase);
        }

        internal ModelGroup GetGroup()
        {
            return new ModelGroup(root, ModelName);
        }

        public IEnumerable<string> GetMappedOptionNames()
        {
            return HiddenSelections.Where(h => h.Action != HiddenSelectionAction.Ignore).Select(h => h.OptionName).Distinct(StringComparer.OrdinalIgnoreCase);
        }

        public IEnumerable<string> GetAllOptionNames()
        {
            return GetMappedOptionNames().Concat(Options.Where(o => !string.IsNullOrEmpty(o.Name)).Select(o => o.Name));
        }

        public IEnumerable<string> GetInitialOptionNames()
        {
            return GetMappedOptionNames().Concat(Metadata.ExplicitOptions.Keys);
        }

        public void ComputeModelLevelOptions(List<string> allOptions, List<string> mappedOptions)
        {
            if ( !IsGroup)
            {
                IsGroup = true;
                AddOption.Changed();
            }

            var mapped    = GetMappedOptionNames().ToList();
            var notMapped = allOptions.Where(o => !mapped.Contains(o, StringComparer.OrdinalIgnoreCase)).ToList();

            foreach(var missingOption in notMapped)
            {
                var vm = Options.FirstOrDefault(m => string.Equals(m.Name, missingOption, StringComparison.OrdinalIgnoreCase));
                if (vm == null)
                {
                    Options.Add(vm = new ModelOptionsViewModel(this, missingOption, true, 
                        Metadata.GapOptions.TryGetValue(missingOption, out var value) || Metadata.ExplicitOptions.TryGetValue(missingOption, out value) ? value : string.Empty));
                }
                vm.IsAutomatic = true;
                vm.IsEditable = !mappedOptions.Contains(missingOption, StringComparer.OrdinalIgnoreCase);
            }

            var cleanup = Options.Where(o => o.IsAutomatic && !notMapped.Contains(o.Name, StringComparer.OrdinalIgnoreCase)).ToList();
            foreach(var other in cleanup)
            {
                Options.Remove(other);
            }

        }

        internal void ResetModelLevelOptions()
        {
            if (IsGroup)
            {
                IsGroup = false;
                AddOption.Changed();
            }
            Options.Clear();
        }

        public string ModelName
        {
            get { return modelName; }
            set
            {
                modelName = value;
                if (action != ModelAction.Ignore)
                {
                    SetMetadataAndSave();
                }
            }
        }
    }
}