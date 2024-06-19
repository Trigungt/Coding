#include<stdio.h>
int main()
{
    float principalamount,time,rateofinterest,si;
    printf("Enter principal amount: ");
    scanf("%f",&principalamount);
    printf("Enter time: ");
    scanf("%f",&time);
    printf("Enter rate of interest: ");
    scanf("%f",&rateofinterest);
    si=(principalamount*time*rateofinterest)/100;
    printf("Simple interest is: %f",si);
    return 0;
}