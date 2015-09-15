#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[10];
    int t,i;
    cin>>t;
    while(t--)
    {
        cin>>s;
        i=strlen(s);
        if(i==5)
            cout<<"3\n";
        else if(i==3)
        {
            if((s[0]=='o'&&s[1]=='n')||(s[0]=='o'&&s[2]=='e')||(s[1]=='n'&&s[2]=='e'))
                cout<<"1\n";
            else
                cout<<"2\n";
        }
    }
    return 0;
}


