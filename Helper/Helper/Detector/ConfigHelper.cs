using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using BIS.Core.Config;
using BIS.Core.Streams;
using BIS.PBO;
using Microsoft.Win32;

namespace Helper
{
    static class ConfigHelper
    {
        public static IEnumerable<T> Get<T>(this IEnumerable<ParamFile> files, string name) where T : ParamEntry
        {
            return files.Where(f => f.Root != null).Select(f => f.Root).Get<T>(name);
        }

        public static IEnumerable<T> Get<T>(this IEnumerable<ParamClass> entries) where T : ParamEntry
        {
            return entries.SelectMany(e => e.Entries.OfType<T>());
        }

        public static IEnumerable<T> Get<T>(this IEnumerable<ParamClass> entries, string name) where T : ParamEntry
        {
            return entries.SelectMany(e => e.Entries.OfType<T>()).Where(e => string.Equals(e.Name, name, StringComparison.OrdinalIgnoreCase));
        }

        public static IEnumerable<T> Get<T>(this ParamClass entry, string name) where T : ParamEntry
        {
            return entry.Entries.OfType<T>().Where(e => string.Equals(e.Name, name, StringComparison.OrdinalIgnoreCase));
        }

        public static IEnumerable<T> Get<T>(this ParamClass entry) where T : ParamEntry
        {
            return entry.Entries.OfType<T>();
        }

        public static T Get<T>(this ParamClass entry, string name, IEnumerable<ParamClass> cfgClassRoot) where T : ParamEntry
        {
            var value = entry.Get<T>(name).FirstOrDefault();
            if (value != null)
            {
                return value;
            }
            if (!string.IsNullOrEmpty(entry.BaseClassName))
            {
                return
                    cfgClassRoot
                    .Get<ParamClass>(entry.BaseClassName)
                    .Select(e => e.Get<T>(name, cfgClassRoot))
                    .Where(v => v != null)
                    .FirstOrDefault();
            }
            return null;
        }

        public static T GetValue<T>(this ParamClass entry, string name, IEnumerable<ParamClass> classes)
        {
            var value = entry.Get<ParamValue>(name, classes);
            if (value != null)
            {
                return value.Get<T>();
            }
            return default(T);
        }

        public static T[] GetArray<T>(this ParamClass entry, string name, IEnumerable<ParamClass> classes)
        {
            return entry.Get<ParamArray>(name, classes)?.ToArray<T>();
        }

        public static bool Inherits(this ParamClass entry, string wantedBaseClassName, IEnumerable<ParamClass> cfgClassRoot)
        {
            if (!string.IsNullOrEmpty(entry.BaseClassName))
            {
                if (string.Equals(wantedBaseClassName, entry.BaseClassName))
                {
                    return true;
                }
                return cfgClassRoot
                    .Get<ParamClass>(entry.BaseClassName)
                    .Any(c => c.Inherits(wantedBaseClassName, cfgClassRoot));
            }
            return false;
        }


        internal static ParamFile ReadParamFile(string file)
        {
            var ext = Path.GetExtension(file);
            ParamFile paramFile;
            if (string.Equals(ext, ".cpp", System.StringComparison.OrdinalIgnoreCase))
            {
                paramFile = ParseCpp(file);
            }
            else if (string.Equals(ext, ".pbo", System.StringComparison.OrdinalIgnoreCase))
            {
                var pbo = new PBO(file);
                var configBin = pbo.Files.FirstOrDefault(f => f.FileName == "config.bin");
                if (configBin != null)
                {
                    using (var stream = configBin.OpenRead())
                    {
                        paramFile = StreamHelper.Read<ParamFile>(stream);
                    }
                }
                else
                {
                    var src = Path.GetTempFileName();
                    var configCpp = pbo.Files.FirstOrDefault(f => f.FileName == "config.cpp");
                    if (configCpp != null)
                    {
                        using (var streamFile = File.Create(src))
                        using (var stream = configCpp.OpenRead())
                        {
                            stream.CopyTo(streamFile);
                        }
                        paramFile = ParseCpp(src);
                        File.Delete(src);
                    }
                    else
                    {
                        paramFile = new ParamFile();
                    }
                }
            }
            else
            {
                paramFile = StreamHelper.Read<ParamFile>(file);
            }
            return paramFile;
        }

        private static ParamFile ParseCpp(string src)
        {
            ParamFile paramFile;
            var dst = Path.GetTempFileName();
            Process.Start(new ProcessStartInfo(Path.Combine(GetArma3ToolsPath(), "CfgConvert", "CfgConvert.exe"), $@"-bin -dst ""{dst}"" ""{src}""")
            {
                WindowStyle = ProcessWindowStyle.Hidden,
                CreateNoWindow = true,
                UseShellExecute = false
            }).WaitForExit();
            paramFile = StreamHelper.Read<ParamFile>(dst);
            File.Delete(dst);
            return paramFile;

        }

        internal static string GetArma3ToolsPath()
        {
            string path = "";
#pragma warning disable CA1416 // Valider la compatibilité de la plateforme
            using (var key = Registry.LocalMachine.OpenSubKey(@"SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\Steam App 233800"))
            {
                if (key != null)
                {
                    path = (key.GetValue("InstallLocation") as string) ?? path;
                }
            }
#pragma warning restore CA1416 // Valider la compatibilité de la plateforme
            if (string.IsNullOrEmpty(path))
            {
                throw new ApplicationException("Arma 3 Tools are not installed.\r\nUnable to process a text config file.\r\nPlease install Arma 3 Tools with Steam, or open a binarized config file.");
            }
            return path;
        }
    }
}
