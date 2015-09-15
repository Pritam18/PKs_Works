#include<stdio.h>
int main()
{
    int t,n,p,q,a[1000],i=1,j,c,s;
    scanf("%d",&t);
    while(i<=t)
    {
        s=0;
        scanf("%d %d %d",&n,&p,&q);
        j=1;
        while(j<=n)
        {
            scanf("%d",&a[j]);
            j++;
        }
        c=0;
        for(j=1;j<=n;j++)
        {
            s=s+a[j];
            if(j<=p && s<=q)
                c++;
            else
                break;
        }
        printf("Case %d: %d\n",i,c);
        i++;
    }
    return 0;
}

