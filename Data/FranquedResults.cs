using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json.Serialization;
using System.Threading.Tasks;

namespace Walli.Data
{
    public class FranquedResults
    {
        [JsonPropertyName("franqueds")]
        public User[] Franqueds { get; set; }

        [JsonPropertyName("countPages")]
        public int CountPages { get; set; }
    }
}
