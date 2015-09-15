#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    while(cin>>A>>B>>C)
    {
        if(A==1 && B==0 && C==0)
        {
            cout<<"A\n";
        }
        else if(A==0 && B==1 && C==1)
        {
            cout<<"A\n";
        }
        else if(A==0 && B==1 && C==0)
        {
            cout<<"B\n";
        }
        else if(A==1 && B==0 && C==1)
        {
            cout<<"B\n";
        }
        else if(A==0 && B==0 && C==1)
        {
            cout<<"C\n";
        }
        else if(A==1 && B==1 && C==0)
        {
            cout<<"C\n";
        }
        else
        {
            cout<<"*\n";
        }
    }
}

