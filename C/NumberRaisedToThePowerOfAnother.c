#include<stdio.h>
#include<math.h>
int main()
{
    int base,p;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter power: ");
    scanf("%d",&p);
    int power=1;
    for(int i=1;i<=p;i++)
    {
        power=power*base;
    }
    printf("%d raised to %d is: %d",base,p,power);
    return 0;
}