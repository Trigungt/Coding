#include<stdio.h>
int main()
{
    int num1,num2,rem;
    printf("Enter dividend: ");
    scanf("%d",&num1);
    printf("Enter divisor: ");
    scanf("%d",&num2);
    rem=num1%num2;      // % --> modulus operator
    printf("Remainder when %d is divided by %d is: %d",num1,num2,rem);
    return 0;
}

