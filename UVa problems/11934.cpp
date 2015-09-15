#include<iostream>
using namespace std;
int main()
{
    long int a,b,c,d,l,p,s;
    while(cin>>a>>b>>c>>d>>l)
    {
        s=0;
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        {
            break;
        }
        for(int i=0;i<=l;i++)
        {
            p=a*i*i+b*i+c;
            if(p%d==0)
            {
                s=s+1;
            }
        }
        cout<<s<<"\n";
    }
}

