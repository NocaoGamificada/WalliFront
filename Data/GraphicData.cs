using System.Text.Json.Serialization;

namespace Walli.Data
{
    public class GraphicData
    {
        [JsonPropertyName("twitter")]
        public GraphicPie Twitter { get; set; }

        [JsonPropertyName("facebook")]
        public GraphicPie Facebook { get; set; }

        [JsonPropertyName("koo")]
        public GraphicPie Koo { get; set; }

        [JsonPropertyName("google")]
        public GraphicPie Google { get; set; }
    }
}
