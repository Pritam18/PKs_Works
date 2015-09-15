#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int a,b;
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            cin>>a>>b;
            if(b%a==0)
            {
                cout<<a<<" "<<b<<endl;
            }
            else
            {
                cout<<"-1"<<endl;
            }
        }
    }
}
