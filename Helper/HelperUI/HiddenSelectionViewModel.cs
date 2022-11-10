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
        private int priority;

        public HiddenSelectionViewModel(ModelViewModel modelViewModel, DetectedHiddenSelection detected)
        {
            Metadata = modelViewModel.Metadata.GetMetadataFor(detected);
            Parent = modelViewModel;
            Detected = detected;
            Count = Parent.Detected.Configs.Count(c => c.HiddenSelections.ContainsKey(detected.Name));
            optionName = Metadata.OptionName ?? detected.Name;
            optionValue = Metadata.OptionValue ?? string.Empty;
            Values = detected.Values.Select(v => new HiddenSelectionValueViewModel(this, v)).ToList();
            priority = Metadata.Priority ?? 0;

            if (Metadata.Action != null)
            {
                var actionCode = Metadata.Action.Value;
                action = HiddenSelectionAction.Values.FirstOrDefault(m => m.Code == actionCode) ?? HiddenSelectionAction.MapToAnOption;
            }
            else
            {
                if (Values.Count == 1)
                {
                    action = HiddenSelectionAction.Ignore;
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

        public string CountOptionLabel => Values.FirstOrDefault(v => v.Detected.Value != string.Empty)?.CountLabel ?? string.Empty;

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
                    foreach(var other in Parent.HiddenSelections)
                    {
                        other.PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(ShowPriority)));
                    }
                }
            }
        }

        public int Priority
        {
            get { return priority; }
            set
            {
                priority = value;
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
            Metadata.Priority = priority;
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

        public Visibility ShowPriority => Parent.HiddenSelections.Any(o => o != this && o.OptionName == OptionName) ? Visibility.Visible : Visibility.Collapsed;

        public event PropertyChangedEventHandler? PropertyChanged;

        public void AddToOptionValue(DetectedConfigInfo info, Dictionary<string,string?> values)
        {
            if (action != HiddenSelectionAction.Ignore)
            {
                var texture = info.GetHiddenSelection(Detected.Name);
                if (action == HiddenSelectionAction.MapToAnOptionValue)
                {
                    if (texture != string.Empty)
                    {
                        SetOption(values, OptionValue);
                    }
                }
                else if (action == HiddenSelectionAction.MapToAnOption)
                {
                    var optionValue = Values.FirstOrDefault(v => v.Detected.Value == texture)?.ValueName;
                    if (optionValue != string.Empty)
                    {
                        SetOption(values, optionValue);
                    }
                }
            }
        }

        private void SetOption(Dictionary<string, string?> values, string? optionValue)
        {
            if (optionValue != null && optionValue.StartsWith("+="))
            {
                values[OptionName] = (values.TryGetValue(OptionName, out var evalue) ? evalue : string.Empty) + optionValue.Substring(2);
            }
            else
            {
                values[OptionName] = optionValue;
            }
        }
    }
}