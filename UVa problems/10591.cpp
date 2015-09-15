#include<stdio.h>
int main()
{
    long long int t,n,i,temp,s,r,p;
    while((scanf("%lld",&t))==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%lld",&n);
            temp=n;
            for(;;)
            {
                s=0;
                for(;;)
                {
                    r=n%10;
                    n=n/10;
                    p=r*r;
                    s=s+p;
                    if(n==0)
                    {
                        break;
                    }
                }
                if(s>9)
                {
                    n=s;
                }
                else if(s<=9 && s!=1 || s==1)
                {
                    break;
                }
            }
            if(s<=9 && s!=1)
            {
                printf("Case #%lld: %lld is an Unhappy number.\n",i,temp);
            }
            else if(s==1)
            {
                printf("Case #%lld: %lld is a Happy number.\n",i,temp);
            }
        }
    }
}

