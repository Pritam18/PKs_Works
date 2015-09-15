#include<stdio.h>
int main()
{
    int t,p=0,i;
    float l,w,d,m;
    while(scanf("%d",&t)!=EOF)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%f%f%f%f",&l,&w,&d,&m);
            if((l<=56 && w<=45 && d<=25 && m<=7))
            {
                p=p+1;
                printf("1\n");
            }
            else if((l+w+d)<=125 && m<=7)
            {
                p=p+1;
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        printf("%d\n",p);
    }
}

