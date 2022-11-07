using System;
using System.Windows.Input;

namespace HelperUI
{
    public class AddOptionCommand : ICommand
    {
        private readonly ModelViewModel modelViewModel;

        public AddOptionCommand(ModelViewModel modelViewModel)
        {
            this.modelViewModel = modelViewModel;
        }

        public event EventHandler? CanExecuteChanged;

        public bool CanExecute(object? parameter)
        {
            return modelViewModel.IsGroup;
        }

        public void Execute(object? parameter)
        {
            modelViewModel.GetGroup().AddOption();
        }

        public void Changed()
        {
            CanExecuteChanged?.Invoke(this, EventArgs.Empty);
        }
    }
}