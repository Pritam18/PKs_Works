#include<iostream>
using namespace std;
int main()
{
    int h1,m1,h2,m2,a1,s1,a2,s2,s;
    while(cin>>h1>>m1>>h2>>m2)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        else if(h1==0)
        {
            h1=24;
        }
        else if(h2==0)
        {
            h2=24;
        }
        a1=h1*60;
        s1=a1+m1;
        a2=h2*60;
        s2=a2+m2;
        s=s2-s1;
        if(s<0)
        {
            s=s+24*60;
        }
        cout<<s<<"\n";
    }
}

