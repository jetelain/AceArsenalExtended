using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelperUI
{
    public class HiddenSelectionAction
    {
        public static HiddenSelectionAction MapToAnOption = new HiddenSelectionAction("Map to an option");
        public static HiddenSelectionAction MapToAnOptionValue = new HiddenSelectionAction("Map to an option value");
        public static HiddenSelectionAction Ignore = new HiddenSelectionAction("Ignore");

        public static HiddenSelectionAction[] Values = new []{ MapToAnOption, MapToAnOptionValue, Ignore };
        public HiddenSelectionAction(string label)
        {
            Label = label;
        }

        public string Label { get; }
    }
}
