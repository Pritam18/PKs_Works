#include<iostream>
using namespace std;
int main()
{
    int n,h[50],s,p,S,k=0,i,j,q;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        s=0;
        S=0;
        for(i=0;i<n;i++)
        {
            cin>>h[i];
            s=s+h[i];
        }
        p=s/n;
        for(j=0;j<n;j++)
        {
            if(p<h[j])
            {
                q=h[j]-p;
                S=S+q;
            }
        }
        cout<<"Set #"<<++k<<"\nThe minimum number of moves is "<<S<<".\n\n";
    }
    return 0;
}

