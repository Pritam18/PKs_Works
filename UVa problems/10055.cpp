#include<iostream>
using namespace std;
int main()
{
    long long int h,o;
    while(cin>>h>>o)
    {
        if(h>=o)
        {
            cout<<h-o<<"\n";
        }
        else
        {
            cout<<o-h<<"\n";
        }
    }
}


