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

        public MainWindow()
        {
            InitializeComponent();
        }

        private void Analyze(string[] files)
        {
            Task.Factory.StartNew(() =>
            {
                try
                {
                    var rawdata = ModelDetector.Detect(files, SetStatus);

                    SetStatus("Check data");
                    metadata.Initialize(System.IO.Path.Combine(System.IO.Path.GetDirectoryName(files[0]) ?? string.Empty, "aceax.json"));
                    var data = new List<ModelViewModel>();
                    data.AddRange(rawdata.Select(m => new ModelViewModel(m, metadata, data)));
                    foreach (var model in data)
                    {
                        model.InitModelLevelOptions();
                    }

                    SetStatus("Done");
                    Dispatcher.BeginInvoke(() => DetectedModelList.ItemsSource = data);
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
                var result = GetGenerateData();
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

        private GenerateXtdConfig GetGenerateData()
        {
            return new GenerateXtdConfig(DetectedModelList.ItemsSource.OfType<ModelViewModel>().Where(m => m.Action != ModelAction.Ignore));
        }

        private void GenerateSingle(object sender, RoutedEventArgs e)
        {
            var dlg = new SaveFileDialog();
            dlg.Title = "Generate to a file";
            dlg.FileName = "XtdGear.hpp";
            dlg.Filter = "Text config file|*.hpp;*.cpp";
            if (dlg.ShowDialog() == true)
            {
                var result = GetGenerateData();
                using (var writer = File.CreateText(dlg.FileName))
                {
                    result.WriteXtdGearModelsTo(writer);
                    result.WriteXtdGearInfosTo(writer);
                }
            }
        }
    }
}
