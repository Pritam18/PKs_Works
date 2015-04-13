using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using ENTITY;
using System.IO;
namespace DAL
{
    public class DataAccess_Car
    {
        Car_Info c=new Car_Info();

        public void savefile(Car_Info car)
        {
            c = car;
            StreamWriter sw = new StreamWriter("E:\\MY TEXT\\PROGRAMMING\\Project C#\\Car\\file.txt");
            sw.Write(car.getspeed());
            sw.Close();
        }

        public Car_Info getfile()
        {
            StreamReader sr = new StreamReader("E:\\MY TEXT\\PROGRAMMING\\Project C#\\Car\\file.txt");
            int s = Convert.ToInt32( sr.Read());
            sr.Close();
            c.setspeed(s);
            return c;
        }
    }
}
