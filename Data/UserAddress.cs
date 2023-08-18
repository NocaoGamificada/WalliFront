using System.ComponentModel.DataAnnotations;
using System.Text.Json.Serialization;

namespace Walli.Data
{
    public class UserAddress
    {
        public int Id { get; set; }

        [JsonPropertyName("cep")]
        public string CEP { get; set; } = string.Empty;

        [JsonPropertyName("city")]
        public string City { get; set; } = string.Empty;

        [JsonPropertyName("addressNumber")]
        public int AddressNumber { get; set; }

        [JsonPropertyName("uf")]
        public string UF { get; set; } = string.Empty;

        [JsonPropertyName("country")]
        public string Country { get; set; } = string.Empty;

        [JsonPropertyName("address")]
        public string Address { get; set; } = string.Empty;
    }
}
