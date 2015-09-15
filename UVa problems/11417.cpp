#include<iostream>
using namespace std;
int GCD(int a,int b)
{
    int c;
    while(a!=0)
    {
        c=b%a;
        b=a;
        a=c;
    }
    return(b);
}
int main()
{
    int N,G=0,i,j;
    while(cin>>N)
    {
        if(N==0)
            break;
        else
        {
            G=0;
            for(i=1;i<N;i++)
            {
                for(j=i+1;j<=N;j++)
                {
                    G+=GCD(i,j);
                }
            }
            cout<<G<<endl;
        }
    }
}

