#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,p,q,i;
    while((scanf("%lld",&n))==1)
    {
        if(n==0)
        {
            break;
        }
        q=n;
        p=sqrt(n);
        i=p*p;
        if(i==q)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}

