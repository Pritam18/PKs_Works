#include<iostream>
using namespace std;
int main()
{
    long long int s,d,a,i,p;
    while(cin>>s>>d)
    {
        a=0;
        for(i=s;;i++)
        {
            a=a+i;
            if(a>=d)
            {
                break;
            }
        }
        cout<<i<<endl;
    }
}
