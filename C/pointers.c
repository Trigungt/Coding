#include<stdio.h>
int main()
{
    int num=56;
    int* x=&num;
    printf("%p",x); // %p --> prints the address.Here, prints the address of num variable 
    return 0;
}