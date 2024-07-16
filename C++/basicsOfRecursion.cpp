#include<bits/stdc++.h>
using namespace std;
int i=1;
void printName(int n)
{
    if(i>n) return;
    cout<<"Trigun"<<" ";
    i++;
    printName(n);
}
int main()
{
    int n;
    cin>>n;
    printName(n);
    return 0;
}