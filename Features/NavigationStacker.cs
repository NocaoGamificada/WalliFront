using Microsoft.AspNetCore.Components;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Features
{
    public class NavigationStacker
    {
        private readonly NavigationManager navigationManager;
        private readonly PageHistoryState historyState;
        private readonly LocalStorage localStorage;

        public List<Teste> OnExitedPage;

        public NavigationStacker(PageHistoryState historyState, NavigationManager navigationManager, LocalStorage localStorage)
        {
            this.historyState = historyState;
            this.navigationManager = navigationManager;
            OnExitedPage = new();
            this.localStorage = localStorage;
        }

        public async Task NavigateTo(string pageName, bool registerPage = false)
        {
            if (registerPage)
                await historyState.AddPage("/Markse-front" + pageName);

            await localStorage.CheckSessionCache();

            navigationManager.NavigateTo("/Markse-front" + pageName);
        }

        public async Task NavigateBack()
        {
            if (OnExitedPage.Count > 0)
                foreach (var _event in OnExitedPage)
                {
                    await _event();
                }

            await localStorage.CheckSessionCache();

            navigationManager.NavigateTo(await historyState.BackPage());
        }

        public async Task ClearPreviousPages()
        {
             await historyState.SetHistory(new() { "/index" });
        }

        public void AddExitedListener(Teste _event) => OnExitedPage.Add(_event);
    }
}

public delegate Task Teste();
