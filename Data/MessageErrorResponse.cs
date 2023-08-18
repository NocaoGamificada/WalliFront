using System.Text.Json.Serialization;

namespace Walli.Data
{
    public class MessageErrorResponse
    {
        [JsonPropertyName("messageError")]
        public string? MessageError { get; set; }
    }
}
