#include<iostream>
using namespace std;
unsigned long long int n,a;
int main()
{
    while(cin>>n)
    {
        if(n==0)
            break;
        else
        {
            a=(n*n*n*n*n*n+3*n*n*n*n+12*n*n*n+8*n*n)/24;
            cout<<a<<endl;
        }
    }
    return 0;
}

