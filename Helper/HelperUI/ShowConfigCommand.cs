using System;
using System.Windows.Input;
using Helper;

namespace HelperUI
{
    internal class ShowConfigCommand : ICommand
    {
        private ModelViewModel modelViewModel;

        public ShowConfigCommand(ModelViewModel modelViewModel)
        {
            this.modelViewModel = modelViewModel;
        }

        public event EventHandler? CanExecuteChanged;

        public bool CanExecute(object? parameter)
        {
            return true;
        }

        public void Execute(object? parameter)
        {
            new ConfigList(new GenerateModel(new System.Collections.Generic.List<IDetectedModelMapper>() { modelViewModel })).Show();
        }
    }
}