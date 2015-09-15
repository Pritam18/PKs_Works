#include<iostream>
using namespace std;
int main()
{
    int x,y,z,t,i,r;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>z;
        r=(2*z*x-y*z)/(x+y);
        cout<<r<<endl;
    }
}

