#include<iostream>
using namespace std;
int main()
{
    long long int N,s;
    while(cin>>N)
    {
        if(N<0)
        {
            break;
        }
        s=0;
        for(int i=1;i<=N;i++)
        {
            s=s+i;
        }
        s=s+1;
        cout<<s<<"\n";
    }
}
