#include<stdio.h>
int main()
{
    int m;
    printf("Enter no of rows and columns: ");
    scanf("%d",&m);
    for(int i=1;i<=m;i++)     
    {
        for(int j=1;j<=m;j++)  
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}