using System.Text.Json.Serialization;

namespace Walli.Data
{
    public class Assinature
    {
        [JsonPropertyName("expireAssination")]
        public DateTime ExpireAssination { get; set; }

        [JsonPropertyName("level")]
        public int Level { get; set; }

        [JsonPropertyName("status")]
        public bool Status { get; set; }
    }
}
