#include<iostream>
using namespace std;
int main()
{
    int t,a,f;
    while(cin>>t)
    {
        for(int n=1;n<=t;n++)
        {
            cin>>a>>f;
            for(int i=1;i<=f;i++)
            {
                for(int j=1;j<=a;j++)
                {
                    for(int k=1;k<=j;k++)
                    {
                        cout<<j;
                    }
                    cout<<"\n";
                }
                for(int l=a-1;l>=1;l--)
                {
                    for(int m=1;m<=l;m++)
                    {
                        cout<<l;
                    }
                    cout<<"\n";
                }
                if(i!=f || n!=t)
                {
                    cout<<"\n";
                }
            }
        }
    }
}

