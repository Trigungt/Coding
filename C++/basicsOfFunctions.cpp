#include<iostream>
using namespace std;
void printName(string name)
{
    cout<<"Hey "<<name<<endl;
}
int main()
{
    string name1;
    cout<<"Enter name1: ";
    cin>>name1;
    printName(name1);

    
    string name2;
    cout<<"Enter name2: ";
    cin>>name2;
    printName(name2);
    return 0;
}