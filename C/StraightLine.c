#include<stdio.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,slope1,slope2;
    printf("Enter first point: ");
    scanf("%f%f",&x1,&y1);
    printf("Enter second point: ");
    scanf("%f%f",&x2,&y2);
    printf("Enter third point: ");
    scanf("%f%f",&x3,&y3);
    slope1=(y2-y1)/(x2-x1);
    printf("slope1=%.2f\n",slope1);
    slope2=(y3-y2)/(x3-x2);
    printf("slope2=%.2f\n",slope2);
    if(slope1==slope2)
    {
        printf("(%.0f,%.0f),(%.0f,%.0f),(%.0f,%.0f) all lie on a straight line",x1,y1,x2,y2,x3,y3);
    }
    else
    {
        printf("(%.0f,%.0f),(%.0f,%.0f),(%.0f,%.0f) donot lie on a straight line",x1,y1,x2,y2,x3,y3);
    }
    return 0;
}