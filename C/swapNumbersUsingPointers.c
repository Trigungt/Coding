#include<stdio.h>
void swap(int *x,int *y)
{
    int temp;
    temp=*y;
    *y=*x;
    *x=temp;
    return;
}
int main()
{
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    swap(&num1,&num2);
    printf("The value of first number after swapping is: %d\n",num1);
    printf("The value of second number after swapping is: %d",num2);
    return 0;
}

// This is called pass by reference