using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Walli.Data
{
    public class UserNotification
    {
        public int Id { get; set; }

        public string Title { get; set; } = string.Empty;
        public string Content { get; set; } = string.Empty;

        public DateTime Date { get; set; }

        public int UserId { get; set; }
    }
}
