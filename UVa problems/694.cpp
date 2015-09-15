#include<iostream>
using namespace std;
int main()
{
    signed long long int a,A,l,i;
    for(int j=1;;j++)
    {
        cin>>A>>l;
        a=A;
        if(A<0 && l<0)
        {
            break;
        }
        else
        {
           for(i=1;;i++)
            {
                if(A==1)
                {
                    break;
                }
                else if(A>l)
                {
                    break;
                }
                if(A%2==0)
                {
                    A=A/2;
                }
                else if(A%2!=0)
                {
                    A=3*A+1;
                }
            }
            if(A>l)
            {
                i=i-1;
            }
        }
        cout<<"Case "<<j<<": A = "<<a<<", limit = "<<l<<", number of terms = "<<i<<"\n";
    }
}
