#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);
    if(marks>=80)
    {
        printf("A grade");
    }
    else if(marks>=60)
    {
        printf("B grade");
    }
    else if(marks>=40)
    {
        printf("C grade");
    }
    else
    {
        printf("D grade");
    }
    return 0;
}