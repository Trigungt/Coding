#include<stdio.h>
int main()
{
    float pi=3.1415,radius,area;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area of Circle is: %f",area);
    return 0;
}