#include<iostream>
using namespace std;
int main()
{
    int T,i,Term1,Term2,Final,Attendance,Class_Test1,Class_Test2,Class_Test3,m,s;
    while(cin>>T)
    {
        for(i=1;i<=T;i++)
        {
            cin>>Term1>>Term2>>Final>>Attendance>>Class_Test1>>Class_Test2>>Class_Test3;
            if(Term1>=0 && Term1<=20)
            {
                Term1=Term1;
            }
            if(Term2>=0 && Term2<=20)
            {
                Term2=Term2;
            }
            if(Final>=0 && Final<=30)
            {
                Final=Final;
            }
            if(Attendance>=0 && Attendance<=10)
            {
                Attendance=Attendance;
            }
            if(Class_Test1>=0 && Class_Test1<=20 && Class_Test2>=0 && Class_Test2<=20 && Class_Test3>=0 && Class_Test3<=20)
            {
                if(Class_Test1>=Class_Test2 && Class_Test2>Class_Test3 || Class_Test2>=Class_Test1 && Class_Test1>Class_Test3)
                {
                    m=(Class_Test1+Class_Test2)/2;
                }
                else if(Class_Test2>=Class_Test3 && Class_Test3>Class_Test1 || Class_Test3>=Class_Test2 && Class_Test2>Class_Test1)
                {
                    m=(Class_Test2+Class_Test3)/2;
                }
                else if(Class_Test3>=Class_Test1 && Class_Test1>Class_Test2 || Class_Test1>=Class_Test3 && Class_Test3>Class_Test2)
                {
                    m=(Class_Test3+Class_Test1)/2;
                }
                else if(Class_Test1==Class_Test2==Class_Test3)
                {
                    m=(Class_Test1+Class_Test2)/2;
                }
                else if(Class_Test1==Class_Test2 && Class_Test1<Class_Test3)
                {
                    m=(Class_Test3+Class_Test2)/2;
                }
                else if(Class_Test2==Class_Test3 && Class_Test2<Class_Test1)
                {
                    m=(Class_Test1+Class_Test3)/2;
                }
                else if(Class_Test3==Class_Test1 && Class_Test3<Class_Test2)
                {
                    m=(Class_Test2+Class_Test1)/2;
                }
            }
            s=m+Term1+Term2+Final+Attendance;
            if(s>=90 && s<=100)
            {
                cout<<"Case "<<i<<": "<<"A"<<"\n";
            }
            else if(s>=80 && s<90)
            {
                cout<<"Case "<<i<<": "<<"B"<<"\n";
            }
            else if(s>=70 && s<80)
            {
                cout<<"Case "<<i<<": "<<"C"<<"\n";
            }
            else if(s>=60 && s<70)
            {
                cout<<"Case "<<i<<": "<<"D"<<"\n";
            }
            else if(s>=0 && s<60)
            {
                cout<<"Case "<<i<<": "<<"F"<<"\n";
            }
            s=0;
        }
    }
}
