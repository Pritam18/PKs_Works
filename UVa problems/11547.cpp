#include<iostream>
using namespace std;
int main()
{
    long int t,n,p,q,r;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        n=((((((n*567)/9)+7492)*235)/47)-498);
        n=n/10;
        r=n%10;
        if(r<0)
        {
            r=r*(-1);
            cout<<r<<"\n";
        }
        else
        {
            cout<<r<<"\n";
        }
    }
}

