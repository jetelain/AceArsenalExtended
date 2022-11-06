using System;
using System.Collections.Generic;
using System.Linq;
using BIS.Core.Config;

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
        // config.SelectMany(c => c.Entries.OfType<ParamValue>().Where(e => string.Equals(e.Name, "worldName", StringComparison.OrdinalIgnoreCase))).FirstOrDefault();

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
    }
}
