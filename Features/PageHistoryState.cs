using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;

namespace Features
{
    public class PageHistoryState
    {
        private readonly LocalStorage localStorage;

        public PageHistoryState(LocalStorage localStorage)
        {
            this.localStorage = localStorage;
        }

        public async Task AddPage(string pageRoute)
        {
            var list = await GetHistory();
            list.Add(pageRoute);

            await SetHistory(list);
        }

        public async Task<string> BackPage()
        {
            var list = await GetHistory();
            if (CanGoBack(list))
            {
                list.RemoveAt(list.Count - 1);
                await SetHistory(list);
            }

            return list.Last();
        }

        public static bool CanGoBack(List<string> list)
        {
            return list.Count > 1;
        }

        public async Task SetHistory(List<string> list)
        {
            var json = JsonSerializer.Serialize(list);

            await localStorage.SetInSession("pageHistory", json);
        }

        public async Task<List<string>> GetHistory()
        {
            var json = await localStorage.GetInSession("pageHistory");
            if (string.IsNullOrEmpty(json))
            {
                var _list = new List<string>() { "/Markse-front/index" };
                await SetHistory(_list);
                return _list;
            }
            var list = JsonSerializer.Deserialize<List<string>>(json);
            
            return list;
        }
    }
}
