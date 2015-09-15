#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,x[101],i,j;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n;
            for(j=0;j<n;j++)
            {
                cin>>x[j];
            }
            sort(x,x+n);
            cout<<2*(x[n-1]-x[0])<<endl;
        }
    }
    return 0;
}

