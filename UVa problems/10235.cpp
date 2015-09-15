#include<iostream>
#include<math.h>
using namespace std;
bool prime(long long int n)
{
    long long int i,f;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            f=0;
            break;
        }
        else
            f=1;
    }
    if(f==0 || n==1)
        return false;
    else
        return true;
}
bool equalrev(long long int n)
{
    long long int s=0,i,r,a=n;
    for(i=1;;i++)
    {
        r=a%10;
        a=a/10;
        s=s*10+r;
        if(a==0)
            break;
    }
    if(prime(s)==true && n!=s)
        return true;
    else
        return false;
}
int main()
{
    long long int n1;
    while(cin>>n1)
    {
        if(prime(n1)==true && equalrev(n1)==true)
            cout<<n1<<" is emirp.\n";
        else if(prime(n1)==false)
            cout<<n1<<" is not prime.\n";
        else
            cout<<n1<<" is prime.\n";
    }

}

