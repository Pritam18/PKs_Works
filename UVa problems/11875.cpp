#include<iostream>
using namespace std;
int main()
{
    int t,n,a[11];
    while(cin>>t)
    {
        for(int i=1;i<=t;i++)
        {
            cin>>n;
            for(int j=0;j<n;j++)
            {
                cin>>a[j];
            }
            cout<<"Case "<<i<<": "<<a[(n/2)]<<endl;
        }
    }
}

