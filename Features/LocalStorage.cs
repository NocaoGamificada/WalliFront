using Microsoft.JSInterop;
using System.Text.Json;

namespace Features
{
    public class LocalStorage
    {
        private readonly IJSRuntime js;

        public LocalStorage(IJSRuntime js)
        {
            this.js = js;
        }

        public async Task<string> Get(string key) => await js.InvokeAsync<string>("localStorage.getItem", key);

        public async Task Set(string key, string value) => await js.InvokeVoidAsync("localStorage.setItem", key, value);

        public async Task<string> GetInSession(string key) => await js.InvokeAsync<string>("sessionStorage.getItem", key);

        public async Task SetCacheInSession(string key, string value, int minnutes = 1)
        {
            await SetChacheTime(key, minnutes);
            await js.InvokeVoidAsync("sessionStorage.setItem", key, value);
        }

        public async Task<bool> CheckAuthSession()
        {
            var isLogged = await js.InvokeAsync<string>("sessionStorage.getItem", "isLogged");

            return isLogged == "ok";
        }

        public async Task StartAuthSession()
        {
            await js.InvokeVoidAsync("sessionStorage.setItem", "isLogged", "ok");
        }

        public async Task ClearSession()
        {
            await js.InvokeVoidAsync("sessionStorage.clear");
        }

        public async Task Clear()
        {
            await js.InvokeVoidAsync("localStorage.clear");
        }

        public async Task<string> GetLoggedRole()
        {
            var rolesJson = await Get("roles");

            return JsonSerializer.Deserialize<string[]>(rolesJson)?.FirstOrDefault() ?? "";
        }

        async Task SetChacheTime(string cacheName, int minuttes = 5)
        {
            var cached = await GetChacheTime();
            if (cached.Keys.Contains(cacheName))
            {
                cached[cacheName] = DateTime.UtcNow.AddMinutes(minuttes);
            }
            else
            {
                cached.Add(cacheName, DateTime.UtcNow.AddMinutes(minuttes));
            }

            await SetInSession("chacheTime", JsonSerializer.Serialize(cached));
        }

        public async Task SetInSession(string key, string value) => await js.InvokeVoidAsync("sessionStorage.setItem", key, value);

        async Task<Dictionary<string, DateTime>> GetChacheTime()
        {
            var json = await GetInSession("chacheTime");
            if (string.IsNullOrEmpty(json))
            {
                var list = new Dictionary<string, DateTime>();
                await SetInSession("chacheTime", JsonSerializer.Serialize(list));
                return list;
            }

            return JsonSerializer.Deserialize<Dictionary<string, DateTime>>(json) ?? new();
        }

        public async Task CheckSessionCache()
        {
            var cached = await GetChacheTime();
            var expires = cached.Where(c => c.Value < DateTime.UtcNow).ToList();

            foreach (var e in expires)
            {
                await SetInSession(e.Key, "");
                cached.Remove(e.Key);
            }

            await SetInSession("chacheTime", JsonSerializer.Serialize(cached));
        }
    }
}
