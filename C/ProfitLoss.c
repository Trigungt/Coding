#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter cost price: ");
    scanf("%d",&cp);
    printf("Enter selling price: ");
    scanf("%d",&sp);
    if(sp==cp)
    {
        printf("No Profit no loss");
    }
    else if(sp>cp)
    {
        printf("Seller has made a profit of %d",sp-cp);
    }
    else
    {
        printf("Seller has incurred a loss of %d",cp-sp);
    }
    return 0;
}