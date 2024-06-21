#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter side a: ");
    scanf("%d",&a);
    printf("Enter side b: ");
    scanf("%d",&b);
    printf("Enter side c: ");
    scanf("%d",&c);
    if( (a+b)>c && (b+c)>a && (a+c)>b )
    {
        printf("%d %d %d can be the sides of a triangle",a,b,c);
    }
    else
    {
        printf("%d %d %d cannot be the sides of a triangle",a,b,c);
    }
    return 0;
}