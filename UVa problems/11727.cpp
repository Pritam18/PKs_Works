#include<iostream>
using namespace std;
int main()
{
    int T,i,a,b,c;
    while(cin>>T)
    {
        if(T>0 && T<20)
        {
            for(i=1;i<=T;i++)
            {
                cin>>a>>b>>c;
                if(a>=1000 && a<=10000 && b>=1000 && b<=10000 && c>=1000 && c<=10000)
                {
                    if((b>a && a>c) || (c>a && a>b))
                    {
                        cout<<"Case "<<i<<": "<<a<<"\n";
                    }
                    else if(a>b && b>c || c>b && b>a)
                    {
                        cout<<"Case "<<i<<": "<<b<<"\n";
                    }
                    else if(a>c && c>b || b>c && c>a)
                    {
                        cout<<"Case "<<i<<": "<<c<<"\n";
                    }

                }
            }
        }
    }
}
