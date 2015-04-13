using BO;
using Entity;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace UI
{
    public partial class Form1 : Form
    {
        AccountBO accBO = new AccountBO();
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                Account a = new Account();
                a.AccountNo = textAccountNo.Text;
                a.HolderName = textHolderName.Text;
                a.Balance = Convert.ToDouble(textBalance.Text);
                a.Address = textAddress.Text;
                a.ContactNo = textContactNo.Text;
                a.Bank = textBank.Text;
                a.Branch = textBranch.Text;
        
                accBO.saveAccountInfo(a);
                MessageBox.Show("Saved Successfully ");

                textAccountNo.ResetText();
                textHolderName.ResetText();
                textBalance.ResetText();
                textAddress.ResetText();
                textContactNo.ResetText();
                textBank.ResetText();
                textBranch.ResetText();

            }
            catch (Exception e1)
            {
                MessageBox.Show("are u kidding");
            }

        }
    }
}
