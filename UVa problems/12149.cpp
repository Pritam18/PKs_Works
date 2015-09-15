#include<iostream>
using namespace std;
int main()
{
    int n,i,s;
    while(cin>>n)
    {
        s=0;
        if(n==0)
        {
            break;
        }
        for(i=1;i<=n;i++)
        {
            s=s+i*i;
        }
        cout<<s<<"\n";
    }
}
