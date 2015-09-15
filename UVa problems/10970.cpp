#include<iostream>
using namespace std;
int main()
{
    int M,N;
    while(cin>>M>>N)
    {
        if(M>=1 && M<=300 && N>=1 && N<=300)
        {
            cout<<((M*N)-1)<<"\n";
        }
    }
}

