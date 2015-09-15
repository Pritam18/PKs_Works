#include<stdio.h>
int main()
{
    int k,n,m,x,y,i;
    while(scanf("%d",&k)==1)
    {
        if(k==0)
            break;
        scanf("%d %d",&m,&n);
        for(i=1;i<=k;i++)
        {
            scanf("%d %d",&x,&y);
            if(x==m || y==n)
                printf("divisa\n");
            else if(x>m && y>n)
                printf("NE\n");
            else if(x<m && y<n)
                printf("SO\n");
            else if(x>m && y<n)
                printf("SE\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}

