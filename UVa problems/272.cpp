#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char s[100000];
    long int l,i,c=0;
    while(gets(s))
    {
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='"')
            {
                if(c%2==0)
                    cout<<"``";
                else
                    cout<<"''";
                c++;
            }
            else
                cout<<s[i];
        }
        cout<<endl;
    }
}

