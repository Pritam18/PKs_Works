#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int s,n,t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        n=(-1+sqrt(1+8*s))/2;
        cout<<n<<endl;
    }

    return 0;
}

