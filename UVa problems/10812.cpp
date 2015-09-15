#include<iostream>
using namespace std;
int main()
{
    long int i,n,s,d,a;
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
        {
            cin>>s>>d;
            if(s<d ||(s-d)%2!=0)
            {
                cout<<"impossible"<<"\n";
            }
            else
            {
                a=(s-d)/2;
                cout<<(a+d)<<" "<<a<<"\n";
            }
        }
    }
}

