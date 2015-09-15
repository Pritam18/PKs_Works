#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    int t,l;
    double w,r,a,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&l);
        w=(6.0*l)/10.0;
        r=l/5.0;
        c=pi*r*r;
        a=(w*l)-c;
        printf("%0.2lf %0.2lf\n",c,a);
    }
    return 0;
}

