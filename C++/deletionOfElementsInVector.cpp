#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vect;
    vect.emplace_back(10);
    vect.emplace_back(11);
    vect.emplace_back(12);
    vect.emplace_back(13);
    vect.emplace_back(14);
    cout<<"Elements before deletion: ";
    for(auto it:vect)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    vect.erase(vect.begin()+1,vect.begin()+3);
    cout<<"Elements after deletion: ";
    for(auto it:vect)
    {
        cout<<it<<" ";
    }
    return 0;
}