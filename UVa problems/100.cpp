#include<iostream>
using namespace std;
int main()
{
    long long int n1,n2,i,j,m,c,n;
    while(cin>>n1>>n2)
    {
         m=0;
         if(n2>=n1)
         {
             for(i=n1;i<=n2;i++)
             {
                 c=1;
                 j=i;
                 while(j!=1)
                 {
                     if(j%2==0)
                     {
                         j=j/2;
                     }
                     else if(j%2!=0)
                     {
                         j=(3*j)+1;
                     }
                     c++;
                 }
                 if(m<=c)
                 {
                     m=c;
                 }
             }
         }
         else if(n1>n2)
         {
             for(i=n2;i<=n1;i++)
             {
                 c=1;
                 j=i;
                 while(j!=1)
                 {
                     if(j%2==0)
                     {
                         j=j/2;
                     }
                     else if(j%2!=0)
                     {
                         j=(3*j)+1;
                     }
                     c++;
                 }
                 if(m<=c)
                 {
                     m=c;
                 }
             }
         }
         cout<<n1<<" "<<n2<<" "<<m<<"\n";
    }
}


