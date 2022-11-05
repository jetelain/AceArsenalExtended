using System;
using System.Collections.Generic;
using System.Diagnostics.CodeAnalysis;
using System.Linq;

namespace HelperUI
{
    internal class StringArrayEqualityComparer : IEqualityComparer<string[]>
    {
        public bool Equals(string[]? x, string[]? y)
        {
            return x != null && y != null && x.Length == y.Length && x.SequenceEqual(y, StringComparer.OrdinalIgnoreCase);
        }

        public int GetHashCode([DisallowNull] string[] obj)
        {
            if(obj.Length == 0)
            {
                return 0;
            }
            return obj.Select(o => StringComparer.OrdinalIgnoreCase.GetHashCode(o)).Aggregate((a,b) => a ^ b);
        }
    }
}