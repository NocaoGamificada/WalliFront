using System.Text.Json.Serialization;

namespace Walli.Data
{
    public class SearchAnalysis
    {
        [JsonPropertyName("id")]
        public int Id { get; set; }

        [JsonPropertyName("emotion")]
        public string Emotion { get; set; }

        [JsonPropertyName("usingMask")]
        public bool UsingMask { get; set; }

        [JsonPropertyName("temperature")]
        public double Temperature { get; set; }

        [JsonPropertyName("isMention")]
        public bool IsMention { get; set; }

        [JsonPropertyName("commentTemperature")]
        public double CommentTemperature { get; set; }
    }
}
