#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if(num<0)
    {
        num=num*(-1);
    }
    printf("Absolute value is: %d",num);
    return 0;
}