#include<iostream>
using namespace std;
int main()
{
    long long int n,m,p,i=0;
    while(cin>>n)
    {
        if(n<0)
        {
            break;
        }
        m=1;
        p=0;
        for(;;)
        {
            if(m<n)
            {
                m=m+m;
                p=p+1;
            }
            else
            {
                break;
            }
        }
        cout<<"Case "<<++i<<": "<<p<<endl;
    }
}
