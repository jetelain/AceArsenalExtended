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

                var data = rawdata.Select(m => new ModelViewModel(m, metadata)).ToList();
                Dispatcher.BeginInvoke(() => Status.Text = "Done");
                Dispatcher.BeginInvoke(() => DetectedModelList.ItemsSource = data);
            });
        }

        private void OpenFile(object sender, RoutedEventArgs e)
        {
            var dlg = new OpenFileDialog();
            dlg.Title = "Load config file";
            dlg.DefaultExt = ".cpp";
            dlg.Filter = "Config lile|*.cpp;*.bin";
            dlg.Multiselect = true;
            if (dlg.ShowDialog() == true)
            {
                Analyze(dlg.FileNames);
            }
        }
    }
}
