using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json.Serialization;
using System.Threading.Tasks;

namespace Walli.Data
{
    public class WalliTerm
    {
        [JsonPropertyName("id")]
        public int Id { get; set; }

        [JsonPropertyName("term")]
        public string Term { get; set; } = string.Empty;

        [JsonPropertyName("clientSearchId")]
        public int ClientSearchId { get; set; }
    }
}
