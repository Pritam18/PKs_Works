#include<stdio.h>
int main()
{
    int i,j,temp,a[1100],n,c;
    while(scanf("%d",&n)!=EOF)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<(n-1);i++)
        {
            for(j=0;j<(n-1);j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    c++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",c);
    }
    return 0;
}

