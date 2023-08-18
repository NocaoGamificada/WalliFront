using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json.Serialization;
using System.Threading.Tasks;

namespace Walli.Data
{
    public class HomeData
    {
        [JsonPropertyName("totalFranqued")]
        public int TotalFranqueds { get; set; }
        
        [JsonPropertyName("totalClient")]
        public int TotalClients { get; set; }

        [JsonPropertyName("totalMarks")]
        public int TotalMarks { get; set; }

        [JsonPropertyName("totalSellers")]
        public int TotalSellers { get; set; }
    }
}
