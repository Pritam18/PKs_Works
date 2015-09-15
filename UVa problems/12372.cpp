#include<iostream>
using namespace std;
int main()
{
    int i,T,L,W,H;
    while(cin>>T)
    {
        for(i=1;i<=T;i++)
        {
            cin>>L>>W>>H;
            if(L>=1 && L<=20 && W>=1 && W<=20 && H>=1 && H<=20)
            {
                cout<<"Case "<<i<<": "<<"good\n";
            }
            else
            {
                cout<<"Case "<<i<<": "<<"bad\n";
            }
        }
    }
}

