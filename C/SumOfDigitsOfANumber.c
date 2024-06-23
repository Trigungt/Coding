#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum=0;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("Sum of digits is: %d",sum);
    return 0;
}