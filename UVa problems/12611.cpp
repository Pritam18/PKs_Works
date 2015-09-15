#include<stdio.h>
int main()
{
    int t,c=0;
    long int x1,y1,x2,y2,x3,y3,x4,y4,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&r);
        x1=(-1*45*r)/20;
        y1=(30*r)/20;
        x2=(55*r)/20;
        y2=(30*r)/20;
        x3=(55*r)/20;
        y3=(-1*30*r)/20;
        x4=(-1*45*r)/20;
        y4=(-1*30*r)/20;
        printf("Case %d:\n%ld %ld\n%ld %ld\n%ld %ld\n%ld %ld\n",++c,x1,y1,x2,y2,x3,y3,x4,y4);
    }
    return 0;
}

