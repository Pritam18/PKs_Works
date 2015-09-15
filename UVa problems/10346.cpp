#include<iostream>
using namespace std;
int main()
{
    int n,k,i,p,q,b,s,t;
    while(cin>>n>>k)
    {
        t=n;
        while(n>=k)
        {
            p=n/k;
            q=n%k;
            n=p+q;
            s=s+p;
        }
        b=s;
        s=0;
        cout<<b+t<<"\n";
    }
}

