using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DAL
{
    public class AccountAccess
    {
        #region saveacccountinfo
        public bool saveaccountinfo(Account a)
        {
            try
            {
                StreamWriter write = new StreamWriter("D:\\MY TEXT\\PROGRAMMING\\Project C#\\Projects\\Banking System\\Test.txt", true);
                write.WriteLine(a.AccountNo);
                write.WriteLine(a.HolderName);
                write.WriteLine(a.Balance);
                write.WriteLine(a.Bank);
                write.WriteLine(a.Branch);
                write.WriteLine(a.Address);
                write.WriteLine(a.ContactNo);
                write.Close();
                return true;
            }
            catch (Exception e)
            {
                return false;
            }
        }
        #endregion

        #region getaccountinfo

        public List<Account> getaccountinfo()
        {
            try
            {
                List<Account> All = new List<Account>();
                StreamReader read = new StreamReader("D:\\MY TEXT\\PROGRAMMING\\Project C#\\Projects\\Banking System\\Test.txt");
                String temp = read.ReadLine();
                while (temp != null)
                {
                    Account a = new Account();
                    a.AccountNo = temp;
                    a.HolderName = read.ReadLine();
                    a.Balance = Convert.ToDouble( read.ReadLine());
                    a.Address = read.ReadLine();
                    a.ContactNo = read.ReadLine();
                    a.Bank = read.ReadLine();
                    a.Branch = read.ReadLine();

                    All.Add(a);
                    temp = read.ReadLine();
                }



                read.Close();

                return All;
            }
            catch(Exception e)
            {
                return null;
            }
        }
        #endregion
    }
}
