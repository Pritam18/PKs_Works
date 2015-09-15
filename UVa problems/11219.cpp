#include<iostream>
using namespace std;
int main()
{
    long long int i,t,d1,m1,y1,d2,m2,y2,s3;
    char a;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>d2>>a>>m2>>a>>y2>>d1>>a>>m1>>a>>y1;
            s3=y2-y1;
            if(m2<m1)
            {
                s3=s3-1;
            }
            else if(m2==m1)
            {
                if(d2<d1)
                {
                    s3=s3-1;
                }
            }
            if(s3<0)
            {
                cout<<"Case #"<<i<<": Invalid birth date\n";
            }
            else if(s3>130)
            {
                cout<<"Case #"<<i<<": Check birth date\n";
            }
            else
            {
                cout<<"Case #"<<i<<": "<<s3<<"\n";
            }
        }
    }
}

