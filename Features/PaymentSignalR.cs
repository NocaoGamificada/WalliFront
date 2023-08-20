using Microsoft.AspNetCore.SignalR.Client;

namespace WalliFront.Features
{
    public class PaymentSignalR
    {
        public Action? OnSuccess;
        public Action? OnRegistered;
        public Action<string>? OnError;

        HubConnection hub = default!;

        public async Task Connect()
        {
            hub = new HubConnectionBuilder()
                .WithUrl("http://markse-001-site1.ctempurl.com/paymentHub")
                .WithAutomaticReconnect()
                .Build();

            hub.On("OnError", (string message) =>
            {
                OnError?.Invoke(message);
                hub.DisposeAsync();
            });

            hub.On("OnSuccess", () =>
            {
                OnSuccess?.Invoke();
                hub.DisposeAsync();
            });

            hub.On("OnRegistered", () =>
            {
                OnRegistered?.Invoke();
            });

            await hub.StartAsync();
        }

        public async Task RegisterOrder(string orderId)
        {
            await hub.SendAsync("RegisterEscuta", orderId);
        }
    }
}
