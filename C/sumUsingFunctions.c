#include<stdio.h>
int add(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}
int main()
{
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    int res=add(num1,num2);
    printf("Sum of %d and %d is: %d",num1,num2,res);
    return 0;
}