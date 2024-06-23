#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sum=0;
    while(num>0)
    {
      
        rem=num%10;
        if(rem%2==0)
        {
            sum=sum+rem;
        }
        num=num/10;
    }
    printf("Sum of even digits is: %d",sum);
}    