#include<iostream>
using namespace std;
int main()
{
    long long int N,a,b,c;
    while(cin>>N)
    {
        for(int i=1;i<=N;i++)
        {
            cin>>a>>b>>c;
            if(a<=0 || b<=0 || c<=0 || a+b<=c || b+c<=a || c+a<=b)
            {
                cout<<"Wrong!!"<<"\n";
            }
            else
            {
                cout<<"OK"<<"\n";
            }
        }
    }
}

