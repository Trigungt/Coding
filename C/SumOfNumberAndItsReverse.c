#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int orignum=num;
    int reverse=0;
    while(num>0)
    {
        reverse=reverse*10;
        reverse=reverse+(num%10);
        num=num/10;
    }
    printf("Reversed number is: %d\n",reverse);
    printf("Sum of %d and %d is: %d",orignum,reverse,orignum+reverse);
    return 0;
}