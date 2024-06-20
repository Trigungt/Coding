#include<stdio.h>
int main()
{
    int num;
    float half;
    printf("Enter an integer :");
    scanf("%d",&num);
    float num1=num;
    half=num1/2;
    printf("Half of %d is: %f",num,half);
    return 0;
}