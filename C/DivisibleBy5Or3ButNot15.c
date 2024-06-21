#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if( (num%5==0 || num%3==0) && (num%15!=0) )
    {
        printf("%d is divisible by 5 or 3 but not 15",num);
    }
    else
    {
        printf("%d is not matching the required condition",num);
    }
    return 0;
}