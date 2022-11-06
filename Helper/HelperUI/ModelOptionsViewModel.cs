using System.ComponentModel;

namespace HelperUI
{
    public class ModelOptionsViewModel : INotifyPropertyChanged
    {
        private string name;
        private bool isEditable;
        private string value;

        public ModelOptionsViewModel(ModelViewModel parent, string name, bool isAutomatic, string value)
        {
            this.name = name;
            this.IsAutomatic = isAutomatic;
            this.isEditable = !isAutomatic;
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
                name = value;
                Parent.SetMetadata();
            }
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
                Parent.SetMetadata();
            }
        }

        public bool IsAutomatic { get; set; }

        public bool IsEditable
        {
            get { return isEditable; }
            set
            {
                if (isEditable != value)
                {
                    isEditable = value;
                    PropertyChanged?.Invoke(this, new PropertyChangedEventArgs(nameof(IsEditable)));
                }
            }
        }


        public bool CanBeIgnored => string.IsNullOrEmpty(Name) || (string.IsNullOrEmpty(Value) && Name == "otherOption");

        public ModelViewModel Parent { get; }


        public event PropertyChangedEventHandler? PropertyChanged;
    }
}