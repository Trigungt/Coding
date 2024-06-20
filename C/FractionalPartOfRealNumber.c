#include<stdio.h>
int main()
{
    float num,fracpart;
    printf("Enter a float number: ");
    scanf("%f",&num);
    int num1=num;
    fracpart=num-num1;
    printf("Fractional part of %f is: %f",num,fracpart);
    return 0;
}