#include<iostream>
using namespace std;
int main()
{
    int T,i;
    signed long int a,b,c;
    while(cin>>T)
    {
        if(T<20 && T>0)
        {
            for(i=1;i<=T;i++)
            {
                cin>>a>>b>>c;
                if(a+b<=c || b+c<=a || c+a<=b || a<=0 || b<=0 || c<=0)
                {
                    cout<<"Case "<<i<<": "<<"Invalid"<<"\n";
                }
                else if(a==b && b==c)
                {
                    cout<<"Case "<<i<<": "<<"Equilateral"<<"\n";
                }
                else if(a==b || b==c || c==a)
                {
                    cout<<"Case "<<i<<": "<<"Isosceles"<<"\n";
                }
                else
                {
                    cout<<"Case "<<i<<": "<<"Scalene"<<"\n";
                }
            }
        }
    }

}
