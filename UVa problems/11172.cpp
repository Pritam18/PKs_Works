#include<iostream>
using namespace std;
int main()
{
    int i,t;
    long long int a,b;
    while(cin>>t)
    {
        if(t>0 && t<15)
        {
            for(i=1;i<=t;i++)
            {
                cin>>a>>b;
                if(a<1000000001 && b<1000000001)
                {
                    if(b>a)
                    {
                        cout<<"<"<<"\n";
                    }
                    else if(a>b)
                    {
                        cout<<">"<<"\n";
                    }
                    else if(a==b)
                    {
                        cout<<"="<<"\n";
                    }
                }
            }
        }
    }
}

