
using System.Text.Json.Serialization;

namespace Walli.Data
{
    public class GraphicPie
    {
        [JsonPropertyName("name")]
        public string Name { get; set; } = string.Empty;
        [JsonPropertyName("good")]
        public int Good { get; set; }

        [JsonPropertyName("bad")]
        public int Bad { get; set; }

        [JsonPropertyName("violations")]
        public int Violations { get; set; }
    }
}
