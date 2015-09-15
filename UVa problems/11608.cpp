#include<iostream>
using namespace std;
int main()
{
    int n,a[15],b[15],i,j,k,t=0;
    while(cin>>n)
    {
        if(n<0)
            break;
        else
        {
            a[0]=n;
            for(i=1;i<13;i++)
            {
                cin>>a[i];
            }
            for(j=0;j<12;j++)
            {
                cin>>b[j];
            }
            cout<<"Case "<<++t<<":"<<endl;
            for(k=0;k<12;k++)
            {
                if(a[k]>=b[k])
                {
                    a[k+1]=a[k+1]+a[k]-b[k];
                    cout<<"No problem! :D"<<endl;
                }
                else
                {
                    a[k+1]=a[k+1]+a[k];
                    cout<<"No problem. :("<<endl;
                }
            }
        }
    }
}

