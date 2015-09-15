#include<stdio.h>
int main()
{
    double c,d,F,C;
    int t;
    while((scanf("%d",&t))!=EOF)
    {
        F=0;
        C=0;
        for(int i=1;i<=t;i++)
        {
            scanf("%lf %lf",&c,&d);
            F=((9*c)/5)+32;
            C=(5*(d+F-32))/9;
            printf("Case %d: %0.2f\n",i,C);
        }
    }
}
