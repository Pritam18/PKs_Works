#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,A;
    for(int i=1;i<=1000;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        if(a+b<=c || b+c<=a || c+a<=b || a<=0 || b<=0 || c<=0)
        {
            printf("-1.000\n");
        }
        else
        {
            s=(a+b+c)/2;
            A=(4.0*(sqrt(s*(s-a)*(s-b)*(s-c))))/3.0;
            printf("%0.3lf\n",A);
        }
    }
}

