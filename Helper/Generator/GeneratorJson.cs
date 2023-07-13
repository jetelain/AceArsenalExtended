using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Generator
{
    public class Uniform
    {
        public string model { get; set; }
        public string vehicle { get; set; }
        public string weapon { get; set; }
        public string label { get; set; }
        public string[] extra { get; set; }
        public Dictionary<string, string> set { get; set; }
        public List<Variation> variations { get; set; }
        public string author { get; set; }
        public string picture { get; set; }
        public string sameAs { get; set; }
        public string xtdModel { get; set; }
        public Dictionary<string, string> xtdSet { get; set; }
    }

    public class GeneratorJson
    {
        public List<Uniform> uniforms { get; set; }
        public Dictionary<string, string> legacy { get; set; }
    }


    public class Value
    {
        public string id { get; set; }
        public string xtdId { get; set; }
        public string label { get; set; }
        public string picture { get; set; }
        public Dictionary<string,string> set { get; set; }
    }

    public class Variation
    {
        public string id { get; set; }
        public string xtdId { get; set; }
        public List<Value> values { get; set; }
    }

}
