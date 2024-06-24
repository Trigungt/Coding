#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter no of rows: ");
    scanf("%d",&m);
    printf("Enter no of columns: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++)     // rows
    {
        for(int j=1;j<=n;j++)  // columns
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}