#include<stdio.h>
int main()
{
    long int n,i,s,p;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%ld",&n))
    {
        p=n;
        s=0;
        if(n==0)
        {
            break;
        }
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                s=s+i;
            }
        }
        if(s==p)
        {
            printf("%5ld  PERFECT\n",n);
        }
        else if(s<p)
        {
            printf("%5ld  DEFICIENT\n",n);
        }
        else if(s>p)
        {
            printf("%5ld  ABUNDANT\n",n);
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}
