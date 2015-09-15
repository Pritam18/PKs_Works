#include<iostream>
using namespace std;
int main()
{
    long long int n,m=1;
    while(cin>>n)
    {
        if(n<0 && n%2==0)
        {
            cout<<"Underflow!\n";
        }
        else if(n<0 && n%2!=0)
        {
            cout<<"Overflow!\n";
        }
        else if(n==0 || n<8)
        {
            cout<<"Underflow!\n";
        }
        else if(n>=8 && n<=13)
        {
            m=1;
            for(int i=1;i<=n;i++)
            {
                m=m*i;
            }
            cout<<m<<"\n";
        }
        else if(n>13)
        {
            cout<<"Overflow!\n";
        }
    }
}

