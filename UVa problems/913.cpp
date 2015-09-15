#include<iostream>
using namespace std;
int main()
{
    long long int n,d,a;
    while(cin>>n)
    {
        d=(n+2)/2;
        a=((2*d*d)-3)*3;
        cout<<a<<"\n";
    }
    return 0;
}

