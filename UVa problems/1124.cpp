#include<stdio.h>
int main()
{
    char X;
    while((X=getchar())!=EOF)
    {
       printf("%c",X);
    }
    return 0;
}
