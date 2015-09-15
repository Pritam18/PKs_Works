#include<iostream>
using namespace std;
int main()
{
    long long int t,n,s,r,temp,S,i;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n;
            temp=n;
            S=0;
            s=0;
            for(;;)
            {
                for(;;)
                {
                    r=n%10;
                    n=n/10;
                    s=s*10+r;
                    if(n==0)
                    {
                        break;
                    }
                }
                if(s==temp)
                {
                    break;
                }
                else
                {
                    n=s+temp;
                    temp=s+temp;
                    S=S+1;
                }
                s=0;
            }
            cout<<S<<" "<<s<<"\n";
        }
    }
    return 0;
}
