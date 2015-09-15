#include<stdio.h>
int main()
{
    int a[1000],i,j;
    float t,c,n,s,q,d,average;
    while((scanf("%f",&t))==1)
    {
        for(i=1;i<=t;i++)
        {
            c=0;
            s=0;
            scanf("%f",&n);
            q=n;
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[j]);
            }
            for(j=0;j<n;j++)
            {
                s=s+a[j];
            }
            d=s/n;
            for(j=0;j<n;j++)
            {
                if(a[j]>d)
                {
                    c++;
                }
            }
            average=(c/q)*100;
            printf("%0.3f%%\n",average);
        }
    }
    return 0;
}


