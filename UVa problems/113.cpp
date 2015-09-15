#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,z;
    while((scanf("%lf%lf",&x,&y))!=EOF)
    {
        z=pow(y,(1/x));
        printf("%0.0lf\n",z);
    }
    return 0;
}

