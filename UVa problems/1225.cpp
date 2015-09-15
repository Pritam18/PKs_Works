#include<iostream>
using namespace std;
int main()
{
    int t,n,a,b,c,d,e,f,g,h,i,j,k,l,m,r,o;
    while(cin>>t)
    {
        for(k=1;k<=t;k++)
        {
            a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
            cin>>n;
            for(l=1;l<=n;l++)
            {
                m=l;
                for(o=1;;o++)
                {
                    r=m%10;
                    if(r==0)
                        a++;
                    else if(r==1)
                        b++;
                    else if(r==2)
                        c++;
                    else if(r==3)
                        d++;
                    else if(r==4)
                        e++;
                    else if(r==5)
                        f++;
                    else if(r==6)
                        g++;
                    else if(r==7)
                        h++;
                    else if(r==8)
                        i++;
                    else if(r==9)
                        j++;
                    m=m/10;
                    if(m==0)
                        break;
                }
            }
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<" "<<j<<endl;
        }
    }
}


