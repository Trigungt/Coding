#include<stdio.h>
int main()
{
    int n;
    printf("Enter no of terms: ");
    scanf("%d",&n);
    int sum=0;
    if(n%2==0)
    {
        sum=-n/2;
    }
    else
    {
        sum=n-n/2;
    }    
    printf("The Sum is: %d",sum);
    return 0;
}