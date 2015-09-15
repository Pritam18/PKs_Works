#include<iostream>
using namespace std;
int main()
{
    int v,t,s;
    while(cin>>v>>t)
    {
       if(v>=-100 && v<=100 && t>=0 && t<=200)
        {
            s=2*v*t;
            cout<<s<<"\n";
        }
    }

}

