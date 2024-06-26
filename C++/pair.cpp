#include<iostream>
using namespace std;
int main()
{
    pair<int,int>a={1,2};
    cout<<a.first<<" "<<a.second<<endl;
    pair<int,pair<int,int>>b={3,{4,5}};
    cout<<b.first<<" "<<b.second.first<<" "<<b.second.second;
    return 0;
}