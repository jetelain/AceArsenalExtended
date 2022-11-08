using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Windows;
using Helper;
using Helper.Detector;
using Helper.Metadata;

namespace HelperUI
{
    public class HiddenSelectionViewModel : INotifyPropertyChanged
    {
        private HiddenSelectionAction action;
        private string optionValue;
        private string optionName;

        public HiddenSelectionViewModel(ModelViewModel modelViewModel, DetectedHiddenSelection detected)
        {
            Metadata = modelViewModel.Metadata.GetMetadataFor(detected);
            Parent = modelViewModel;
            Detected = detected;
            Count = Parent.Detected.Configs.Count(c => c.HiddenSelections.ContainsKey(detected.Name));
            optionName = Metadata.OptionName ?? detected.Name;
            optionValue = Metadata.OptionValue ?? string.Empty;
            Values = detected.Values.Select(v => new HiddenSelectionValueViewModel(this, v)).ToList();

            if (Metadata.Action != null)
            {
                action = HiddenSelectionAction.Values[Metadata.Action.Value];
            }
            else
            {
                if (Values.Count == 1)
                {
                    action = HiddenSelectionAction.Ignore;
                }
                else if (Values.Count == 2)
                {
                    action = HiddenSelectionAction.MapToAnOptionValue;
                    optionValue = Values.FirstOrDefault(v => v.Detected.Value != string.Empty)?.ValueName ?? "SET";
                }
                else
                {
                    action = HiddenSelectionAction.MapToAnOption;
                }
            }
        }

        public HiddenSelectionMetadata Metadata { get; }

        public ModelViewModel Parent { get; }

        public DetectedHiddenSelection Detected { get; }

        public int Count { get; }

        public string CountLabel => $"{Count} configs with explicit value";

        public string Name => Detected.Name;

        public string OptionName
        {
            get { return optionName; }
            set
            {
                optionName = value;
                if (action != HiddenSelectionAction.Ignore)
                {
                    SetMetadata();
                    Parent.MappedOptionNameOrValueChange();
                }
            }
        }

        private void SetMetadata()
        {
            Metadata.OptionName = optionName;
            Metadata.OptionValue = optionValue;
            Metadata.Action = action.Code;
        }

        public string OptionValue
        {
            get { return optionValue; }
            set
            {
                optionValue = value;
                if (action == HiddenSelectionAction.MapToAnOptionValue)
                {
                    SetMetadata();
                    Parent.MappedOptionNameOrValueChange();
                }
            }
        }

        public List<HiddenSelectionValueViewModel> Values { get; }

        public HiddenSelectionAction Action 
        { 
            get { return action; } 
            set { 
                this.action = value;
                PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(ShowValues)));
                PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(ShowValuePrompt)));
                PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(ShowNamePrompt)));
                SetMetadata();
                Parent.MappedOptionNameOrValueChange();
            }
        }

        public Visibility ShowNamePrompt => action != HiddenSelectionAction.Ignore ? Visibility.Visible : Visibility.Collapsed;

        public Visibility ShowValuePrompt => action == HiddenSelectionAction.MapToAnOptionValue ? Visibility.Visible : Visibility.Collapsed;

        public Visibility ShowValues => action == HiddenSelectionAction.MapToAnOption ? Visibility.Visible : Visibility.Collapsed;

        public event PropertyChangedEventHandler? PropertyChanged;

        public void AddToOptionValue(DetectedConfigInfo info, Dictionary<string,string?> values)
        {
            if (action != HiddenSelectionAction.Ignore)
            {
                var value = info.GetHiddenSelection(Detected.Name);
                if (action == HiddenSelectionAction.MapToAnOptionValue)
                {
                    if (value != string.Empty)
                    {
                        values[OptionName] = OptionValue;
                    }
                }
                else if (action == HiddenSelectionAction.MapToAnOption)
                {
                    var optionValue = Values.FirstOrDefault(v => v.Detected.Value == value)?.ValueName;
                    if (optionValue != string.Empty)
                    {
                        values[OptionName] = optionValue;
                    }
                }
            }
        }

    }
}