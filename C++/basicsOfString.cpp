#include<iostream>
using namespace std;
int main()
{
    string s="Trigun";
    int len=s.size();
    cout<<len<<endl;
    s[len-1]='a';
    cout<<s[len-1];
    return 0;
}