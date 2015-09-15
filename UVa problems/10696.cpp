#include<iostream>
using namespace std;
int main()
{
    long long int N;
    while(cin>>N)
    {
        if(N<=100 && N>0)
        {
            cout<<"f91"<<"("<<N<<")"<<" = 91"<<"\n";
        }
        else if(N>=101)
        {
            cout<<"f91"<<"("<<N<<")"<<" = "<<N-10<<"\n";
        }
        else if(N==0)
        {
            break;
        }
    }
}

