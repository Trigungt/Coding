#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    num%2==0?printf("%d is even",num):printf("%d is odd",num);
    return 0;
}

// ternary operator :-

// expression 1 ? expression 2 : expression 3