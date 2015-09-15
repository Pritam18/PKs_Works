#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,y,i,s;
    s=0;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
        {
            break;
        }
        else if(a>0 && a<=100000 && b>0 && b<=100000)
        {
            for(i=1;i<=b;i++)
            {
                y=pow(i,2);
                if(y>=a && y<=b)
                {
                    s=s+1;
                }
            }
            cout<<s<<"\n";
            s=0;
        }
    }
}
