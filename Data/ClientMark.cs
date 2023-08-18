using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json.Serialization;
using System.Threading.Tasks;

namespace Walli.Data
{
    public class ClientMark
    {
        [JsonPropertyName("id")]
        public int Id { get; set; }

        [JsonPropertyName("findTerms")]
        public WalliTerm[] FindTerms { get; set; } = default!;

        [JsonPropertyName("brandName")]
        public string BrandName { get; set; } = default!;

        [JsonPropertyName("status")]
        public string? Status { get; set; } = default!;

        [JsonPropertyName("IgnoreUrls")]
        public WalliTerm[] IgnoreUrls { get; set; } = default!;

        [JsonPropertyName("dayOfWeek")]
        public DayOfWeek DayOfWeek { get; set; } = default!;

        [JsonPropertyName("userId")]
        public int UserId { get; set; }

        [JsonPropertyName("client")]
        public User Client { get; set; } = default!;
    }
}
