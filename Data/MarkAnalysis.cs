using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json.Serialization;
using System.Threading.Tasks;

namespace Walli.Data
{
    public class MarkAnalysis
    {
        [JsonPropertyName("total")]
        public int Total { get; set; }

        [JsonPropertyName("considered")]
        public int Considered { get; set; }

        [JsonPropertyName("disregarded")]
        public int Disregarded { get; set; }
    }
}
