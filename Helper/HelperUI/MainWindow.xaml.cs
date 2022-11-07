using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using System.Windows;
using Helper;
using Microsoft.Win32;

namespace HelperUI
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        private readonly MetadataService metadata = new MetadataService();

        private RootViewModel rootViewModel;

        public MainWindow()
        {
            DataContext = rootViewModel = new RootViewModel(metadata);
            InitializeComponent();
        }

        private void Analyze(string[] files)
        {
            Task.Factory.StartNew(() =>
            {
                try
                {
                    var root = rootViewModel = new RootViewModel(metadata);

                    root.Load(files, SetStatus);

                    Dispatcher.BeginInvoke(() => DataContext = root);
                }
                catch(Exception e)
                {
                    SetStatus("Error: " + e.Message);
                }
            });
        }

        private void SetStatus(string value)
        {
            Dispatcher.BeginInvoke(() => Status.Text = value);
        }

        private void OpenFile(object sender, RoutedEventArgs e)
        {
            var dlg = new OpenFileDialog();
            dlg.Title = "Load config file";
            dlg.DefaultExt = ".cpp";
            dlg.Filter = "Config file or PBO|*.cpp;*.bin;*.pbo";
            dlg.Multiselect = true;
            if (dlg.ShowDialog() == true)
            {
                Analyze(dlg.FileNames);
            }
        }
        private void GenerateCSV(object sender, RoutedEventArgs e)
        {
            var folder = System.IO.Path.GetDirectoryName(metadata.CurrentFile);
            if (!string.IsNullOrEmpty(folder))
            {
                var result = rootViewModel.GetGenerateData();
                foreach (var model in result.Models)
                {
                    var filename = System.IO.Path.Combine(folder, $"aceax_{model.Name}.csv");
                    using (var writer = File.CreateText(filename))
                    {
                        model.WriteCSV(writer);
                    }
                }
                Process.Start("explorer", $@"""{folder}""");
            }
        }

        private void GenerateSingle(object sender, RoutedEventArgs e)
        {
            var dlg = new SaveFileDialog();
            dlg.Title = "Generate to a file";
            dlg.FileName = "XtdGear.hpp";
            dlg.Filter = "Text config file|*.hpp;*.cpp";
            if (dlg.ShowDialog() == true)
            {
                var result = rootViewModel.GetGenerateData();
                using (var writer = File.CreateText(dlg.FileName))
                {
                    result.WriteXtdGearModelsTo(writer);
                    result.WriteXtdGearInfosTo(writer);
                }
            }
        }
    }
}
