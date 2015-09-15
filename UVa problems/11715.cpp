#include<stdio.h>
#include<math.h>
int main()
{
    double u,v,t,s,a;
    long long int i,d;
    for(i=1;;i++)
    {
        scanf("%lld",&d);
        if(d==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+(0.5)*a*t*t;
            printf("Case %lld: %0.3lf %0.3lf\n",i,s,a);
        }
        else if(d==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            t=(v-u)/a;
            s=u*t+0.5*a*t*t;
            printf("Case %lld: %0.3lf %0.3lf\n",i,s,t);
        }
        else if(d==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            if(a>=0)
            v=sqrt((u*u)+2.0*a*s);
            t=(v-u)/a;
            printf("Case %lld: %0.3lf %0.3lf\n",i,v,t);
        }
        else if(d==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt((v*v)-2.0*a*s);
            t=(v-u)/a;
            printf("Case %lld: %0.3lf %0.3lf\n",i,u,t);
        }
        else if(d==0)
        {
            break;
        }
    }
}

