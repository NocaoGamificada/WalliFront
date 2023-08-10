using System.Text.Json.Serialization;

namespace Walli.Data
{
    public class ChatMessage
    {
        [JsonPropertyName("id")]
        public int Id { get; set; }

        [JsonPropertyName("message")]
        public string Message { get; set; } = string.Empty;

        [JsonPropertyName("isBotMessage")]
        public bool IsBotMessage { get; set; } = false;

        [JsonPropertyName("username")]
        public string Username { get; set; } = string.Empty;

        [JsonIgnore]
        public bool IsLoading { get; set; } = false;

        public bool HaveError { get; set; } = false;
    }
}
