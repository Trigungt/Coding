#include<stdio.h>
int main()
{
    int length,breadth,area,perimeter;
    printf("Enter length of rectangle: ");
    scanf("%d",&length);
    printf("Enter breadth of rectangle: ");
    scanf("%d",&breadth);
    area=length*breadth;
    printf("Area of Rectangle is: %d\n",area);
    perimeter=2*(length+breadth);
    printf("Perimeter of Rectangle is: %d\n",perimeter);
    if(area==perimeter)
    {
        printf("Area is equal to perimeter");   
    }
    else if(area>perimeter)
    {
        printf("Area is greater than perimeter");
    }
    else
    {
        printf("Perimeter is greater than area");
    }
    return 0;
}