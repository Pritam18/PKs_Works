#include<stdio.h>
int main()
{
    int h,m,t,r,H,M,T,i;
    while(scanf("%d",&T)==1)
    {
        for(i=1;i<=T;i++)
        {
            scanf("%d:%d",&h,&m);
            if(h==12 && m>=0)
            {
                t=h*60+m;
                r=1440-t;
                M=r%60;
                if(M==0)
                {
                    printf("12:00\n");
                }
                else if(M>9)
                {
                    printf("11:%d\n",M);
                }
                else if(M<10)
                {
                    printf("11:0%d\n",M);
                }
            }
            else if(h==11 && m>0)
            {
                t=h*60+m;
                r=1440-t;
                M=r%60;
                if(M>9)
                {
                    printf("12:%d\n",M);
                }
                else if(M<10)
                {
                    printf("12:0%d\n",M);
                }
            }
            else
            {
                t=h*60+m;
                r=720-t;
                H=r/60;
                M=r%60;
                if((H<10 && H>0) && M>9)
                {
                    printf("0%d:%d\n",H,M);
                }
                else if((M<10 && M>0) && H>9)
                {
                    printf("%d:0%d\n",H,M);
                }
                else if(H>9 && M>9)
                {
                    printf("%d:%d\n",H,M);
                }
                else if(H==0 && M>9)
                {
                    printf("%d:%d\n",H,M);
                }
                else if(H>9 && M==0)
                {
                    printf("%d:0%d\n",H,M);
                }
                else if((H<10 && H>0) && (M<10 && M>0))
                {
                    printf("0%d:0%d\n",H,M);
                }
                else if(H==0 && M<10)
                {
                    printf("%d:0%d\n",H,M);
                }
                else if((H<10 && H>0) && M==0)
                {
                    printf("0%d:0%d\n",H,M);
                }
            }
        }
    }
}

