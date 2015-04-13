using DAL;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BO
{
    public class AccountBO
    {
        AccountAccess acc = new AccountAccess();
        public bool saveaccountinfo(Account a)
        {
            return acc.saveaccountinfo(a);
        }
        public List<Account> getaccountinfo()
        {
            return acc.getaccountinfo();
        }

        public void saveAccountInfo(Entity.Account a)
        {
            throw new NotImplementedException();
        }
    }
}
