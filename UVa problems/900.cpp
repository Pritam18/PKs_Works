#include<iostream>
using namespace std;
int main()
{
    long long int n,s,k,p,i;
    while(cin>>n)
    {
        k=0;
        p=1;
        if(n==0)
            break;
        for(i=1;i<=n;i++)
        {
            s=k+p;
            k=p;
            p=s;
        }
        cout<<p<<endl;
    }
}

