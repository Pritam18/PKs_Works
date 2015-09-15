#include<iostream>
using namespace std;
int main()
{
    int n,r,s,r1;
    while(cin>>n)
    {
        s=0;
        if(n==0)
        {
            break;
        }
        else
        {
            for(int i=1;;i++)
            {
                r=n%10;
                n=n/10;
                s=s+r;
                if(n==0)
                {
                    break;
                }
            }
            while((s/10)!=0)
            {
                r1=s%10;
                s=s/10;
                s=s+r1;
            }
            cout<<s<<"\n";
        }
    }
}
