#include<iostream>
using namespace std;
int main()
{
    long int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        else if(b*b+c*c==a*a || a*a+c*c==b*b || b*b+a*a==c*c)
        {
            cout<<"right"<<"\n";
        }
        else
        {
            cout<<"wrong"<<"\n";
        }
    }
}

