#include<stdio.h>
int main()
{
    long long int n,p,s,i;
    while((scanf("%lld",&n))==1)
    {
        if(n==0)
        {
            break;
        }
        s=0;
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                s=s+i;
            }
        }
        if(s%2==0)
        {
            printf("no\n");
        }
        else if(s%2!=0)
        {
            printf("yes\n");
        }
    }
}

