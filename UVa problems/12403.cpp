#include<iostream>
using namespace std;
int main()
{
    long long int t,s,m,i;
    char a[10];
    while(cin>>t)
    {
        s=0;
        for(i=1;i<=t;i++)
        {
            cin>>a;
            if(a[0]=='d')
            {
                cin>>m;
                s=s+m;
            }
            else if(a[0]=='r')
            {
                cout<<s<<endl;
            }
        }
    }
}

