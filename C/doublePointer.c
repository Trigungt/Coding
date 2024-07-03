#include<stdio.h>
int main()
{
    int num=10;
    int* x=&num;
    printf("%p\n",x);
    int** y=&x;
    printf("%p",y);
    return 0;
}