using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Text.Json.Serialization;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
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
                var rawdata = ModelDetector.Detect(files, info =>
                {
                    Dispatcher.BeginInvoke(() => Status.Text = info);
                });
                Dispatcher.BeginInvoke(() => Status.Text = "Check data");

                metadata.Initialize(System.IO.Path.Combine(System.IO.Path.GetDirectoryName(files[0]) ?? string.Empty, "aceax.json"));

                var data = new List<ModelViewModel>();
                data.AddRange(rawdata.Select(m => new ModelViewModel(m, metadata, data)));
                foreach(var model in data)
                {
                    model.InitModelLevelOptions();
                }
                Dispatcher.BeginInvoke(() => Status.Text = "Done");
                Dispatcher.BeginInvoke(() => DetectedModelList.ItemsSource = data);
            });
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
        private void Preview(object sender, RoutedEventArgs e)
        {
            var result = GetGenerateData();
            var output = result.ToString();
        }

        private GenerateXtdConfig GetGenerateData()
        {
            return new GenerateXtdConfig(DetectedModelList.ItemsSource.OfType<ModelViewModel>().Where(m => m.Action != ModelAction.Ignore));
        }

        private void Generate(object sender, RoutedEventArgs e)
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
