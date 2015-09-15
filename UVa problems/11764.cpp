#include<iostream>
using namespace std;
int main()
{
    int t,n,h,m,s,p,a,q,b;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            m=0;
            s=0;
            a=0;
            cin>>n;
            for(int j=1;j<=n;j++)
            {
                cin>>h;
                b=h;
                if(m<b)
                {
                    p=1;
                    s=s+p;
                }
                else if(m>b)
                {
                    q=1;
                    a=a+q;
                }
                m=h;
            }
            cout<<"Case "<<i<<": "<<s-1<<" "<<a<<"\n";
        }
    }
}
