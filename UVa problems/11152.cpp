#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979
int main()
{
    double a,b,c,s,sf,v,r,A,i,o;
    while((scanf("%lf %lf %lf",&a,&b,&c))==3)
    {
        s=(a+b+c)/2.0;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        o=(pi*a*a*b*b*c*c)/(16.0*A*A);
        i=(pi*A*A)/(s*s);
        sf=o-A;
        v=A-i;
        r=i;
        printf("%0.4lf %0.4lf %0.4lf\n",sf,v,r);
    }
    return 0;
}

