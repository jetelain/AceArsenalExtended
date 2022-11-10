using System;
using System.Collections.Generic;
using System.Data.Common;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Shapes;
using Helper;
using Helper.Detector;

namespace HelperUI
{
    /// <summary>
    /// Logique d'interaction pour ConfigList.xaml
    /// </summary>
    public partial class ConfigList : Window
    {
        public ConfigList(GenerateModel generateModel)
        {
            InitializeComponent();

            Update(generateModel);
        }

        public void Update(GenerateModel generateModel)
        {
            var idx = 0;
            foreach (var opt in generateModel.Options)
            {
                if (Grid.Columns.Count > idx + 3)
                {
                    Grid.Columns[idx + 3].Header = opt.Name;
                }
                else
                {
                    Grid.Columns.Add(new DataGridTextColumn()
                    {
                        Header = opt.Name,
                        Binding = new Binding($"Options[{idx}]"),
                        IsReadOnly = true
                    });
                }
                idx++;
            }
            while ( idx + 3 < Grid.Columns.Count)
            {
                Grid.Columns.RemoveAt(Grid.Columns.Count - 1);
            }
            Title = $"{generateModel.Name} ({generateModel.Label})";
            Grid.ItemsSource = generateModel.Configs.Select(c => new { Config = c.Config, Options = c.Options.Select(o => o.Value).ToList(), Conflict = c.ConflictWith?.ClassName }).ToList();
        }
    }
}
