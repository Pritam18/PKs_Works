#include<iostream>
using namespace std;
int main()
{
    int T,a,b,i,j,s=0;
    while(cin>>T)
    {
        for(j=1;j<=T;j++)
        {
            cin>>a>>b;
            for(i=1;i<=b;i++)
            {
                 if(i%2!=0 && i>=a && i<=b)
                 {
                     s=s+i;
                 }
            }
            cout<<"Case "<<j<<": "<<s<<"\n";
            s=0;
        }
    }
    return 0;
}

