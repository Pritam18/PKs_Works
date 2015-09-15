#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,i,j,c,f,l;
    char a[1000];
    cin>>t;
    getchar();
    while(t--)
    {
        gets(a);
        c=0;
        f=0;
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            if(a[j]=='M')
                c++;
            else if(a[j]=='F')
                f++;
        }
        if(c==f && l!=2)
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }
}




