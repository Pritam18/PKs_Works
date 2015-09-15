#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int n,t,i=1,j,a,b,c,d;
    char s[20];
    cin>>t;
    while(t--)
    {
        a=0,b=0,c=0,d=0;
        cin>>n;
        cin>>s;
        for(j=0;j<n;j++)
        {
            if(s[j]=='B')
                a++;
            else if(s[j]=='W')
                b++;
            else if(s[j]=='T')
                c++;
            else if(s[j]=='A')
                d++;
        }
        if((a+d==n) && a!=0)
            cout<<"Case "<<i<<": "<<"BANGLAWASH\n";
        else if((b+d==n) && b!=0)
            cout<<"Case "<<i<<": "<<"WHITEWASH\n";
        else if(n==d)
            cout<<"Case "<<i<<": "<<"ABANDONED\n";
        else if(a>b)
            cout<<"Case "<<i<<": "<<"BANGLADESH "<<a<<" - "<<b<<endl;
        else if(a<b)
            cout<<"Case "<<i<<": "<<"WWW "<<b<<" - "<<a<<endl;
        else if(a==b)
            cout<<"Case "<<i<<": "<<"DRAW "<<a<<" "<<c<<endl;
        i++;
    }
    return 0;
}

