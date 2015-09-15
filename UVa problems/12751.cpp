#include<iostream>
using namespace std;
int main()
{
    long int t,n,k,x,s=0,p=0,i,j,l,c=1;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n>>k>>x;
            for(j=1;j<=n;j++)
            {
                s=s+j;
            }
            for(l=x;;l++)
            {
                p=p+l;
                c++;
                if(c>k)
                    break;
            }
            cout<<"Case "<<i<<": "<<s-p<<endl;
            s=0;
            p=0;
            c=1;
        }
    }
}
