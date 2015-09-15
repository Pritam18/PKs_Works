#include<stdio.h>
#include<math.h>
int main()
{
    double r,n,a;
    while((scanf("%lf %lf",&r,&n))!=EOF)
    {
        a=0.5*n*r*r*sin((2.0*3.14159265358979)/n);
        printf("%0.3lf\n",a);
    }
}
