#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int reverse=0;
    while(num>0)
    {
        reverse=reverse*10;
        reverse=reverse+(num%10);
        num=num/10;
    }
    printf("Reversed number is: %d",reverse);
    return 0;
}