#include<iostream>
using namespace std;
int main()
{
    int n,p,t,i,j,k,l,m,c,a[100],b[3660];
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n>>p;
            for(j=0;j<p;j++)
            {
                cin>>a[j];
            }
            c=0;
            for(m=0;m<n;m++)
            {
                b[m]=0;
            }
            for(k=0;k<p;k++)
            {
                for(l=0;l<n;l++)
                {
                    if((l+1)%a[k]==0 && (l+1)%7!=6 && (l+1)%7!=0)
                        b[l]=1;
                }
            }
            for(l=0;l<n;l++)
            {
                c=c+b[l];
            }
            cout<<c<<endl;
        }
    }
}

