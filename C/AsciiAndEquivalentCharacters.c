#include<stdio.h>
int main()
{
    for(int i=65;i<=90;i++)
    {
        char ch=(char)i;   // Type Casting
        printf("%c ->",ch);
        printf("%d\n",i);
    }
    return 0;
}