#include<iostream>
using namespace std;
int main()
{
    long long int r,n,j=0,k,i;
    while(cin>>r>>n)
    {
        if(r==0 && n==0)
        {
            break;
        }
        k=n;
        if(r<n)
        {
            cout<<"Case "<<++j<<": "<<"0"<<endl;
        }
        else if(r>n)
        {
            for(i=1;i<=26;i++)
            {
                n=n+k;
                if(n>=r)
                {
                    break;
                }
            }
            if(i<=26)
            {
                cout<<"Case "<<++j<<": "<<i<<endl;
            }
            else
            {
                cout<<"Case "<<++j<<": "<<"impossible"<<endl;
            }
        }
        else if(r==n)
        {
            cout<<"Case "<<++j<<": "<<"0"<<endl;
        }
    }
}

