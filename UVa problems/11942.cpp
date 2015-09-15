#include<iostream>
using namespace std;
int main()
{
    int t,h1,h2,h3,h4,h5,h6,h7,h8,h9,h10;
    while(cin>>t)
    {
        cout<<"Lumberjacks:\n";
        for(int i=1;i<=t;i++)
        {
            cin>>h1>>h2>>h3>>h4>>h5>>h6>>h7>>h8>>h9>>h10;
            if((h1>h2 && h2>h3 && h3>h4 && h4>h5 && h5>h6 && h6>h7 && h7>h8 && h8>h9 && h9>h10) || (h1<h2 && h2<h3 && h3<h4 && h4<h5 && h5<h6 && h6<h7 && h7<h8 && h8<h9 && h9<h10))
            {
                cout<<"Ordered\n";
            }
            else
            {
                cout<<"Unordered\n";
            }
        }
    }
}

