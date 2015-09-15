#include<iostream>
using namespace std;
int main()
{
    int t,i,n,s,p=1,j;
    for(i=1;;i++)
    {
        cin>>t;
        s=0;
        if(t==0)
            break;
        else
        {
            for(j=1;j<=t;j++)
            {
                cin>>n;
                if(n==0)
                    s=s-p;
                else
                    s=s+p;
            }
            cout<<"Case "<<i<<": "<<s<<endl;
        }
    }
}

