#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    int temp;
    temp=num2;
    num2=num1;
    num1=temp;
    printf("First number after swapping is: %d\n",num1);
    printf("Second number after swapping is: %d",num2);
    return 0;
}