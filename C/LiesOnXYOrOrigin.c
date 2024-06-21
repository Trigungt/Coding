#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter point: ");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0)
    {
        printf("%d %d lies on origin",x,y);
    }
    else if(y==0)
    {
        printf("%d %d lies on x-axis",x,y);
    }
    else if(x==0)
    {
        printf("%d %d lies on y-axis",x,y);
    }
    else
    {
        printf("%d %d donot lie on x or y-axis",x,y);
    }
    return 0;
}