#include<iostream>
using namespace std;
int main()
{
    int n,f;
    long long int a,b,c,s;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            s=0;
            cin>>f;
            for(int j=1;j<=f;j++)
            {
                cin>>a>>b>>c;
                s=s+a*c;
            }
            cout<<s<<"\n";
        }
    }
}

