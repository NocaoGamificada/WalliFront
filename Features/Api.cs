

using System.Net.Http.Headers;
using System.Net.Http.Json;
using System.Text;
using System.Text.Json;

namespace Features
{
    public class Api
    {
        public readonly string baseAddres = "http://localhost:5190";
        public readonly Account account = new();
        public readonly WalliClient walliClient = new();
        public readonly WalliManager walliManager = new();
        public readonly WalliFranqued walliFranqued = new();
        public readonly WalliSeller walliSeller = new();
        public readonly WalliSellerUp walliSellerUp = new();

        private readonly LocalStorage localStorage;

        public Api(LocalStorage localStorage)
        {
            this.localStorage = localStorage;
        }

        public async Task<HttpResponseMessage> Get(string route, Dictionary<string, string> headers = null)
        {
            try
            {
                var client = new HttpClient()
                {
                    BaseAddress = new Uri(baseAddres)
                };

                if (headers != null)
                    foreach (var h in headers)
                        client.DefaultRequestHeaders.Add(h.Key, h.Value);

                var response = await client.GetAsync(route);

                return response;
            }
            catch (Exception) { }

            return null;
        }

        public async Task<T> GetJson<T>(string route, Dictionary<string, string> headers = null)
        {
            var client = new HttpClient()
            {
                BaseAddress = new Uri(baseAddres)
            };

            if (headers != null)
                foreach (var h in headers)
                    client.DefaultRequestHeaders.Add(h.Key, h.Value);

            var response = await client.GetAsync(route);
            var json = await response.Content.ReadAsStringAsync();
            if (response.IsSuccessStatusCode)
            {
                return JsonSerializer.Deserialize<T>(json);
            }

            return default;
        }

        public async Task<HttpResponseMessage>? Post(string route, string json, Dictionary<string, string> headers = null)
        {
            try
            {
                var client = new HttpClient()
                {
                    BaseAddress = new Uri(baseAddres)
                };

                if (headers != null)
                    foreach (var h in headers)
                        client.DefaultRequestHeaders.Add(h.Key, h.Value);

                client.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));
                var content = new StringContent(json, Encoding.UTF8, "application/json");

                var response = await client.PostAsync(route, content);

                return response;
            }
            catch (Exception)
            {
                return null;
            }
            
        }

        public async Task<HttpResponseMessage> Post(string route, FormUrlEncodedContent formData, Dictionary<string, string> headers = null)
        {
            var client = new HttpClient()
            {
                BaseAddress = new Uri(baseAddres)
            };

            if (headers != null)
                foreach (var h in headers)
                    client.DefaultRequestHeaders.Add(h.Key, h.Value);

            client.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));

            var response = await client.PostAsync(route, formData);

            return response;
        }

        public async Task<HttpResponseMessage> Put(string route, string json, Dictionary<string, string> headers = null)
        {
            var client = new HttpClient()
            {
                BaseAddress = new Uri(baseAddres)
            };

            if (headers != null)
                foreach (var h in headers)
                    client.DefaultRequestHeaders.Add(h.Key, h.Value);

            client.DefaultRequestHeaders.Accept.Add(new MediaTypeWithQualityHeaderValue("application/json"));
            var content = new StringContent(json ?? "", Encoding.UTF8, "application/json");

            var response = await client.PutAsync(route, content);

            return response;
        }

        public async Task<Dictionary<string, string>> GetLoginHeader()
        {
            var email = await localStorage.Get("email");
            var password = await localStorage.Get("password");

            return new()
            {
                { "email", email },
                { "password", password }
            };
        }
    }

    public class Account
    {
        public string login = "account/user/login";
        public string register = "account/user/register";
        public string resetPassword = "account/user/reset-password";
        public string validResetPasswordCode = "account/user/valid-reset-password-code";
        public string changePassword = "account/user";
        public string checkLogin = "account/user/check-login";
        public string getOwn = "account/user/get-own";
    }

    public class WalliClient
    {
        public string getResults = "walli/client/get-results";
        public string getResult = "walli/client/get-specify-result";
        public string addSearch = "walli/client/add-search";
        public string getMarks = "walli/client/get-marks";
        public string getMarkResult = "walli/client/get-mark-results";
        public string getMark = "walli/client/get-specify-result";
        public string getMarkAnalysis = "walli/client/get-mark-analysis";
        public string deleteSearch = "walli/client/delete-search";
        public string getHomeGraphics = "walli/client/get-home-graphics";
        public string setVisualizedResult = "walli/client/set-view-result";
    }

    public class WalliSeller
    {
        public string getHomeData = "walli/seller/get-home-data";
        public string getClients = "walli/seller/get-users";
        public string getMarks = "walli/seller/get-marks";
        public string addClient = "walli/seller/add-client";
        public string getFatured = "walli/seller/get-fatured";
    }

    public class WalliFranqued
    {
        public string getClients = "walli/franqued/get-users";
        public string getSellers = "walli/franqued/get-sellers";
        public string getFatured = "walli/franqued/get-fatured";
        public string addSeller = "walli/franqued/add-seller";
        public string getMarks = "walli/franqued/get-marks";
        public string getHomeData = "walli/franqued/get-home-data";
    }

    public class WalliManager
    {
        public string getHomeDate = "walli/manager/get-home-date";
        public string getFatured = "walli/manager/get-fatured";
        public string getAnalysisSells = "walli/manager/get-analysis-sells";
        public string getClients = "walli/manager/get-users";
        public string getFranqueds = "walli/manager/get-franqueds";
        public string registerClient = "walli/manager/register-franqued";
        public string addFranqued = "walli/manager/add-franqued";
        public string getMarks = "walli/manager/get-marks";
    }

    public class WalliSellerUp
    {
        public string getResults = "walli/sellerUp/get-results";
        public string getResult = "walli/sellerUp/get-specify-result";
        public string addSearch = "walli/sellerUp/add-search";
        public string getMarks = "walli/sellerUp/get-marks";
        public string getMarkResult = "walli/sellerUp/get-mark-results";
        public string getMark = "walli/sellerUp/get-specify-result";
        public string getMarkAnalysis = "walli/sellerUp/get-mark-analysis";
        public string deleteSearch = "walli/sellerUp/delete-search";
        public string getHomeGraphics = "walli/sellerUp/get-home-graphics";
        public string setVisualizedResult = "walli/sellerUp/set-view-result";
        public string getClient = "walli/sellerUp/get-info-client";
    }
}
