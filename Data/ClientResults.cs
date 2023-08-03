using System.Text.Json.Serialization;
using Walli.Data;

namespace Walli.Data
{
    public class ClientResults
    {
        [JsonPropertyName("clients")]
        public User[] Clients { get; set; }

        [JsonPropertyName("countPages")]
        public int CountPages { get; set; }
    }
}
