#include<iostream>
using namespace std;
int main()
{
    int n1,n2,a1,a2,b1,b2,b3,b4;
    while(cin>>n1>>n2)
    {
        if(n1<0 && n2<0)
        {
            break;
        }
        else
        {
            if(n1>n2)
            {
                a1=n2+100;
                b1=a1-n1;
                b2=n1-n2;
                if(b1>b2)
                {
                    cout<<b2<<"\n";
                }
                else
                {
                    cout<<b1<<"\n";
                }
            }
            else if(n1==n2)
            {
                cout<<"0\n";
            }
            else
            {
                a2=n1+100;
                b3=a2-n2;
                b4=n2-n1;
                if(b3>b4)
                {
                    cout<<b4<<"\n";
                }
                else
                {
                    cout<<b3<<"\n";
                }
            }
        }
    }
}

