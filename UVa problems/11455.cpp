#include<iostream>
using namespace std;
int main()
{
    int i;
    signed long long int T,a,b,c,d;
    while(cin>>T)
    {
        for(i=1;i<=T;i++)
        {
            cin>>a>>b>>c>>d;
            if(a+b+c<=d || a+b+d<=c || a+c+d<=b || b+c+d<=a || a<=0 || b<=0 || c<=0)
            {
                cout<<"banana"<<"\n";
            }
            else if(a==b && b==c && c==d)
            {
                cout<<"square"<<"\n";
            }
            else if((a==b && c==d)|| (b==c && a==d) || (c==a && b==d))
            {
                cout<<"rectangle"<<"\n";
            }
            else
            {
                cout<<"quadrangle"<<"\n";
            }
        }
    }
}

