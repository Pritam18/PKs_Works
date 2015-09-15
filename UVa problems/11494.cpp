#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,a,b,c,d,e,f,g,h;
    while(cin>>x1>>y1>>x2>>y2)
    {
        if(x1==0 && y1==0 && x2==0 && y2==0)
            break;
        if(x1>x2)
        {
            c=x1;
            d=x2;
        }
        else
        {
            c=x2;
            d=x1;
        }
        g=c-d;
        if(y1>y2)
        {
            e=y1;
            f=y2;
        }
        else
        {
            e=y2;
            f=y1;
        }
        h=e-f;
        if(g==0 && h==0)
            cout<<"0\n";
        else if(h==0 || g==0 || h==g)
            cout<<"1\n";
        else
            cout<<"2\n";
    }
}

