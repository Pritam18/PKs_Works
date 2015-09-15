#include<iostream>
using namespace std;
int main()
{
    unsigned long long int N,p;
    while(cin>>N)
    {
        if(N==0)
        {
            break;
        }
        p=(N*10)/9;
        if(N%9==0)
        {
            cout<<p-1<<" "<<p<<"\n";
        }
        else
        {
            cout<<p<<"\n";
        }
    }
}

