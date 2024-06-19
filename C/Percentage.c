#include<stdio.h>
int main()
{
    int TotalMarks;
    float m1,m2,m3,m4,m5,percentage;
    printf("Enter Total marks: ");
    scanf("%d",&TotalMarks);
    printf("Enter Physics marks: ");
    scanf("%f",&m1);
    printf("Enter Chemistry marks: ");
    scanf("%f",&m2);
    printf("Enter Maths marks: ");
    scanf("%f",&m3);
    printf("Enter ComputerScience marks: ");
    scanf("%f",&m4);
    printf("Enter SocialScience marks: ");
    scanf("%f",&m5);
    percentage=( (m1+m2+m3+m4+m5)/(TotalMarks) )*100;
    printf("Percentage of five subjects is: %f",percentage);
    return 0;
}