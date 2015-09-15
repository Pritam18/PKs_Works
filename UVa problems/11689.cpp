#include<iostream>
using namespace std;
int main()
{
    int e,f,c,i,N,p,q,a,b,s=0;
    while(cin>>N)
    {
        for(i=1;i<=N;i++)
        {
            cin>>e>>f>>c;
            a=e+f;
            while(a>=c)
            {
                p=a/c;
                q=a%c;
                a=p+q;
                s=s+p;
            }
            b=s;
            s=0;
            cout<<b<<"\n";
        }
    }
}

