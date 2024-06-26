#include<iostream>
using namespace std;
int Sum(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}
int main()
{
    int num1,num2,res;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    res=Sum(num1,num2);
    cout<<"Sum of "<<num1<<" and "<<num2<<" is: "<<res;
    return 0;
}