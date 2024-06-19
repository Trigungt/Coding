#include<stdio.h>
int main()
{
    float pi=3.1415,radius,volume;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    volume=4*pi*radius*radius*radius/3;
    printf("Volume of Sphere is: %f",volume);
    return 0;
}