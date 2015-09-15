#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[10000];
    long int n,s,i,j,x,k;
    float s1;
    while(scanf("%d",&x)==1)
    {
        scanf("\r");
        for(k=1;k<=x;k++)
        {
            gets(a);
            n = strlen(a);
            s = sqrt(n);
            s1 = sqrt(n);
            if(s==s1)
            {
                for(i=0;i<s;i++)
                {
                    for(j=i;j<n;j=j+s)
                    {
                        printf("%c",a[j]);
                    }
                }
                printf("\n");
            }
            else
                printf("INVALID\n");
        }
    }
}

