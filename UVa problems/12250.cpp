#include<iostream>
using namespace std;
int main()
{
    char s[15];
    int i;
    for(i=1;;i++)
    {
        cin>>s;
        if(s[0]=='#' && s[1]=='\0')
            break;
        else if(s[0]=='H' && s[1]=='E' && s[2]=='L' && s[3]=='L' && s[4]=='O')
            cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
        else if(s[0]=='H' && s[1]=='O' && s[2]=='L' && s[3]=='A')
            cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
        else if(s[0]=='H' && s[1]=='A' && s[2]=='L' && s[3]=='L' && s[4]=='O')
            cout<<"Case "<<i<<": "<<"GERMAN"<<endl;
        else if(s[0]=='B' && s[1]=='O' && s[2]=='N' && s[3]=='J' && s[4]=='O' && s[5]=='U' && s[6]=='R')
            cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
        else if(s[0]=='C' && s[1]=='I' && s[2]=='A' && s[3]=='O')
            cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
        else if(s[0]=='Z' && s[1]=='D' && s[2]=='R' && s[3]=='A' && s[4]=='V' && s[5]=='S' && s[6]=='T' && s[7]=='V' && s[8]=='U' && s[9]=='J' && s[10]=='T' && s[11]=='E')
            cout<<"Case "<<i<<": "<<"RUSSIAN"<<endl;
        else
            cout<<"Case "<<i<<": "<<"UNKNOWN"<<endl;
    }

}

