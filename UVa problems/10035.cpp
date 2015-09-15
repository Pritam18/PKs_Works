#include<iostream>
using namespace std;
int main()
{
    long long int n1,n2,r1,r2,s,S;
    while(cin>>n1>>n2)
    {
        if(n1==0 && n2==0)
        {
            break;
        }
        s=0;
        S=0;
        if(n1>n2)
        {
            for(;;)
            {
                r1=n1%10;
                n1=n1/10;
                r2=n2%10;
                n2=n2/10;
                s=s+r1+r2;
                if(s>9)
                {
                    s=1;
                    S=S+1;
                }
                else
                {
                    s=0;
                }
                if(n1==0)
                {
                    break;
                }
            }
        }
        else if(n2>n1)
        {
            for(;;)
            {

                s=s%10;
                r1=n1%10;
                n1=n1/10;
                r2=n2%10;
                n2=n2/10;
                s=s+r1+r2;
                if(s>9)
                {
                    s=1;
                    S=S+1;
                }
                else
                {
                    s=0;
                }
                if(n2==0)
                {
                    break;
                }
            }
        }
        else
        {
            for(;;)
            {

                s=s%10;
                r1=n1%10;
                n1=n1/10;
                r2=n2%10;
                n2=n2/10;
                s=s+r1+r2;
                if(s>9)
                {
                    s=1;
                    S=S+1;
                }
                else
                {
                    s=0;
                }
                if(n1==0)
                {
                    break;
                }
            }
        }
        if(S==0)
        {
            cout<<"No carry operation.\n";
        }
        else if(S==1)
        {
            cout<<S<<" carry operation.\n";
        }
        else
        {
            cout<<S<<" carry operations.\n";
        }
    }
}

