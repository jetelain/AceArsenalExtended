using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using BIS.Core.Config;
using BIS.Core.Streams;

namespace Helper
{
    class Program
    {
        static void Main(string[] args)
        {
            var configFiles = Directory.GetFiles(@"C:\temp\usp");
            var result = ModelDetector.Detect(Directory.GetFiles(@"C:\temp\usp"), Console.WriteLine);
        }

    }
}
