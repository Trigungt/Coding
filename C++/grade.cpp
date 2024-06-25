#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks: ";
    cin>>marks;
    if(marks>=80)
    {
        cout<<"A grade";
    }
    else if(marks>=60)
    {
        cout<<"B grade";
    }
    else if(marks>=50)
    {
        cout<<"C grade";
    }
    else if(marks>=45)
    {
        cout<<"D grade";
    }
    else if(marks>=25)
    {
        cout<<"E grade";
    }
    else
    {
        cout<<"F grade";
    }
    return 0;
}