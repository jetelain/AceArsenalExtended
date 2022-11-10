using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using Helper;
using Helper.Metadata;
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
            Viewer.Visibility = Visibility.Collapsed;
            Status.Visibility = Visibility.Visible;

            Task.Factory.StartNew(() =>
            {
                try
                {
                    var root = rootViewModel = new RootViewModel(metadata);

                    root.Load(files, SetStatus);

                    Dispatcher.BeginInvoke(() =>
                    {
                        DataContext = root;
                        Viewer.Visibility = Visibility.Visible;
                        Status.Visibility = Visibility.Collapsed;
                    });
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
            var result = rootViewModel.GetGenerateData();
            var folder = Path.GetDirectoryName(result.Models.SelectMany(f => f.FileNames).First()) ?? string.Empty;
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

        private void GenerateSingle(object sender, RoutedEventArgs e)
        {
            var dlg = new SaveFileDialog();
            dlg.Title = "Generate to a file";
            dlg.FileName = "XtdGear.hpp";
            dlg.Filter = "Text config file|*.hpp;*.cpp";
            if (dlg.ShowDialog() == true)
            {
                var result = rootViewModel.GetGenerateData();
                result.WriteToSingleFile(dlg.FileName);
            }
        }
        private void GenerateDirectory(object sender, RoutedEventArgs e)
        {
            var dlg = new SaveFileDialog();
            dlg.Title = "Generate to a directory";
            dlg.FileName = "config.cpp";
            dlg.Filter = "Text config file|*.cpp";
            if (dlg.ShowDialog() == true)
            {
                var result = rootViewModel.GetGenerateData();
                result.WriteToDirectory(Path.GetDirectoryName(dlg.FileName));
            }
        }

        private void ShowModelWithConflicts(object sender, RoutedEventArgs e)
        {
            var model = (sender as MenuItem)?.DataContext as GenerateModel;
            if (model != null)
            {
                var firstdef = rootViewModel.Models.FirstOrDefault(m => m.ModelName == model.Name && m.Detected.ClassRoot == model.ClassRoot);
                var container = Models.ItemContainerGenerator.ContainerFromItem(firstdef) as FrameworkElement;
                if (container != null)
                {
                    container.BringIntoView();
                }
                new ConfigList(model).Show();
            }
        }

        private void Quit(object sender, RoutedEventArgs e)
        {
            Close();
        }

        protected override void OnClosed(EventArgs e)
        {
            base.OnClosed(e);
            Application.Current.Shutdown();
        }
    }
}
