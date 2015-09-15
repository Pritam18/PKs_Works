#include<iostream>
using namespace std;
int main()
{
    double H,D,N,F,i,a,ih,dc,hc,hs;
    while(cin>>H>>D>>N>>F)
    {
        hc=0,hs=0;
        if(H==0)
            break;
        else
        {
            F=F/100;
            a=D*F;
            for(i=1;;i++)
            {
                dc=D;
                if(dc<0)
                    dc=0;
                ih=hs;
                hc=ih+dc;
                hs=hc-N;
                if(hc>H)
                {
                    cout<<"success on day "<<i<<"\n";
                    break;
                }
                if(hs<0)
                {
                    cout<<"failure on day "<<i<<"\n";
                    break;
                }
                D=D-a;
            }

        }
    }
}
