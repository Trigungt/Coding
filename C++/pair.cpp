#include<iostream>
using namespace std;
int main()
{
    pair<int,int>a={1,2};
    cout<<a.first<<" "<<a.second<<endl;
    pair<int,pair<int,int>>b={3,{4,5}};
    cout<<b.first<<" "<<b.second.first<<" "<<b.second.second<<endl;
    pair<int,int>arr[]={ {6,7},{8,9},{10,11} };
    cout<<arr[1].second;
    return 0;
}