#include<stdio.h>
int min(int num1,int num2)
{
    if(num1<num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int gcd(int num1,int num2)
{
    int hcf;
    for(int i=min(num1,num2);i>=1;i--)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int num1,num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    int hcf=gcd(num1,num2);
    printf("The HCF/GCD of %d and %d is: %d",num1,num2,hcf);
    return 0;
}