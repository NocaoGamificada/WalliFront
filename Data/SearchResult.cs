using System.Text.Json.Serialization;
using WalliFront.Data;

namespace Walli.Data
{
    public class SearchResult
    {
        [JsonPropertyName("id")]
        public int Id { get; set; }

        [JsonPropertyName("userId")]
        public int UserId { get; set; }

        [JsonPropertyName("link")]
        public string Link { get; set; } = string.Empty;

        [JsonPropertyName("type")]
        public string Type { get; set; } = string.Empty;

        [JsonPropertyName("content")]
        public string Content { get; set; } = string.Empty;

        [JsonPropertyName("term")]
        public string Term { get; set; } = string.Empty;

        [JsonPropertyName("temperature")]
        public double Temperature { get; set; } = 0;

        [JsonPropertyName("visualized")]
        public bool Visualized { get; set; }

        [JsonPropertyName("date")]
        public DateTime Date { get; set; }

        [JsonPropertyName("analysis")]
        public SearchAnalysis Analysis { get; set; } = default!;

        [JsonPropertyName("search")]
        public ClientMark Search { get; set; } = default!;

        [JsonPropertyName("status")]
        public string? Status { get; set; } = null;
    }
}
