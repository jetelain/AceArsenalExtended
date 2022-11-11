using System.ComponentModel;

namespace HelperUI
{
    public class ModelOptionsViewModel : INotifyPropertyChanged
    {
        public const string NewOptionName = "newOption";

        private string name;
        private bool isMissingMapped;
        private string value;

        public ModelOptionsViewModel(ModelViewModel parent, string name, bool isMissingMapped, string value)
        {
            this.name = name;
            this.isMissingMapped = isMissingMapped;
            this.value = value;
            Parent = parent;
        }

        public string Name 
        {
            get 
            { 
                return name; 
            } 
            set
            {
                Parent.GetGroup().RenameOption(name, value);
            }
        }
        internal void SetName(string newName)
        {
            name = newName;
            PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(Name)));
        }

        public string Value
        {
            get
            {
                return value;
            }
            set
            {
                this.value = value;
                Parent.SetMetadataAndSave();
            }
        }

        public bool IsMissingMapped 
        {
            get
            {
                return isMissingMapped;
            } 
            set
            {
                if (isMissingMapped != value)
                {
                    isMissingMapped = value;
                    PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(IsEditable)));
                }
            }
        }

        public bool IsEditable
        {
            get { return !isMissingMapped; }
        }

        public bool CanBeIgnored => string.IsNullOrEmpty(Name) || (string.IsNullOrEmpty(Value) && Name == NewOptionName);

        public ModelViewModel Parent { get; }


        public event PropertyChangedEventHandler? PropertyChanged;


    }
}