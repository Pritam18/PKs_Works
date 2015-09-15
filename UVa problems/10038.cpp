#include<iostream>
using namespace std;
void sort(int a[],int n)
{
    int i,j,temp,k;
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-1);j++)
        {
            if(a[j]>=a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n,a[3001],b[3000],i,j,k,c;
    while(cin>>n)
    {
        c=1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(j=0;j<n-1;j++)
        {
            b[j]= a[j+1]-a[j];
            if(b[j]<0)
                b[j]=(-1)*b[j];
        }
        sort(b,n-1);
        for(k=0;k<n-1;k++)
        {
            if(b[k+1]==b[k])
            {
                c=0;
                break;
            }
        }
        if(c==0)
            cout<<"Not jolly\n";
        else
            cout<<"Jolly\n";
    }
}

