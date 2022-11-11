namespace HelperUI
{
    public class ModelAction
    {
        public static ModelAction MapToModel = new ModelAction(0, "Map to a model");
        public static ModelAction Ignore = new ModelAction(1, "Ignore");

        public static ModelAction[] Values = new []{ MapToModel, Ignore };
        public ModelAction(int code, string label)
        {
            Label = label;
            Code = code;
        }

        public string Label { get; }
        public int Code { get; }
    }
}
