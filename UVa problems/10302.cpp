#include<iostream>
using namespace std;
int main()
{
    long long int i,x,s;
    while(cin>>x)
    {
        s=0;
        for(i=1;i<=x;i++)
        {
           s=s+i*i*i;
        }
        cout<<s<<"\n";

    }
    return 0;
}

