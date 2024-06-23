#include<stdio.h>
int main()
{
    int n;
    printf("Enter the term: ");
    scanf("%d",&n);
    int a=1,b=1;
    int sum=1;
    for(int i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("The term is: %d",sum);
    return 0;
}