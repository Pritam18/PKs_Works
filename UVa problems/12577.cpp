#include<stdio.h>
int main()
{
    char a;
    int i=0;
    while(scanf("%c",&a))
    {
        if(a=='H')
        {
            printf("Case %d: Hajj-e-Akbar\n",++i);
        }
        else if(a=='U')
        {
            printf("Case %d: Hajj-e-Asghar\n",++i);
        }
        else if(a=='*')
        {
            break;
        }
    }
}

