#include<iostream>
using namespace std;
int main()
{
    int T,N,c,i,j,m;
    while(cin>>T)
    {
        for(i=1;i<=T;i++)
        {
            m=0;
            cin>>N;
            for(j=1;j<=N;j++)
            {
                cin>>c;
                if(c>m)
                {
                    m=c;
                }

            }
            cout<<"Case "<<i<<": "<<m<<"\n";
        }
    }
}
