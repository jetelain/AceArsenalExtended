using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelperUI
{
    public class HiddenSelectionAction
    {
        public static HiddenSelectionAction MapToAnOption = new HiddenSelectionAction(0, "Map to an option");
        public static HiddenSelectionAction MapToAnOptionValue = new HiddenSelectionAction(1, "Map to an option value");
        public static HiddenSelectionAction Ignore = new HiddenSelectionAction(2, "Ignore");

        public static HiddenSelectionAction[] Values = new []{ MapToAnOption, MapToAnOptionValue, Ignore };
        public HiddenSelectionAction(int code, string label)
        {
            Label = label;
            Code = code;
        }

        public string Label { get; }
        public int Code { get; }
    }
}
