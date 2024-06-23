#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int a=0;
    for(int i=2;i<=num-1;i++)
    {
        if(num%i==0)
        {
            a=1;
            break;
        }
    }
    if(num==1)
    {
        printf("1 is neither prime nor composite");
    }
    else if(a==0)
    {
        printf("%d is prime",num);
    }
    else
    {
        printf("%d is composite",num);
    }
    return 0;
}