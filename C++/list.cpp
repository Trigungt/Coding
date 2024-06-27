#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    list<int>ls;
    ls.push_back(2);
    ls.emplace_back(3);
    cout<<"Elements before push: ";
    for(auto it:ls)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    ls.push_front(1);
    cout<<"Elements after push: ";
    for(auto it:ls)
    {
        cout<<it<<" ";
    }
    return 0;
}