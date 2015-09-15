#include<stdio.h>
int main()
{
    long long int fibo[100000],n,s[100000],i,j;
    while(scanf("%lld",&n)==1 && n>=0)
    {
        fibo[0]=0;
        fibo[1]=1;
        s[0]=1;
        for(i=2;i<=n+1;i++)
        {
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
        for(j=1;j<=n;j++)
        {
            s[j]=s[j-1]+fibo[j+1];
        }
        printf("%lld %lld\n",s[n]-fibo[j],s[n]);
    }

}

