#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    double u,v,d,t1,t2,P;
    scanf("%d",&T);
    {
        for(i=1;i<=T;i++)
        {
            scanf("%lf%lf%lf",&d,&v,&u);
            if(v>=u || v<=0 || u<=0 || d<=0)
            {
                printf("Case %d: can't determine\n",i);
            }
            else
            {
                t1=d/sqrt(pow(u,2)-pow(v,2));
                t2=d/u;
                P=t1-t2;
                printf("Case %d: %0.3lf\n",i,P);
            }
        }
    }
}

