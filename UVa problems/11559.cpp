#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long int N,B,H,W,p,a[50],i,j,k,m,temp;
    while(cin>>N>>B>>H>>W)
    {
        m=50000000;
        for(i=0;i<H;i++)
        {
            cin>>p;
            for(j=0;j<W;j++)
            {
                cin>>a[j];
                if(a[j]>=N)
                {
                    temp=p*N;
                    if(temp<m)
                        m=temp;
                }
            }
        }
        if(m>B)
            cout<<"stay home\n";
        else
            cout<<m<<"\n";

    }
}

