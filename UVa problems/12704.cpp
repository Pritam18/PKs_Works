#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double x,y,r,l,a,s,L,S;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf %lf",&x,&y,&r);
        l=sqrt(((x-0.0)*(x-0.0))+((y-0.0)*(y-0.0)));
        L=r+l;
        S=(2.0*r)-L;
        printf("%0.2lf %0.2lf\n",S,L);
    }
}

