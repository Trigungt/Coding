#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    int temp;
    temp=num2;
    num2=num1;
    num1=temp;
    cout<<"First number after swapping is: "<<num1<<endl;
    cout<<"Second number after swapping is: "<<num2;
    return 0;
}