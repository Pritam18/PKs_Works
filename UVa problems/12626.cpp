#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char a[1000];
    int M,A,R,G,I,T,t,i,j,s[6],k,l;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            M=0,A=0,R=0,G=0,I=0,T=0;
            cin>>a;
            l=strlen(a);
            for(j=0;j<l;j++)
            {
                if(a[j]=='M')
                    M++;
                else if(a[j]=='A')
                    A++;
                else if(a[j]=='R')
                    R++;
                else if(a[j]=='G')
                    G++;
                else if(a[j]=='I')
                    I++;
                else if(a[j]=='T')
                    T++;
            }
            A=A/3;
            R=R/2;
            s[0]=M,s[1]=A,s[2]=R,s[3]=G,s[4]=I,s[5]=T;
            sort(s,s+6);
            cout<<s[0]<<endl;
        }
    }
}

