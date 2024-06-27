#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vect;
    vect.emplace_back(10);
    vect.emplace_back(12);
    vect.emplace_back(13);
    vect.emplace_back(14);
    vect.emplace_back(15);
    cout<<"Elements before insertion: ";
    for(auto it:vect)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    vect.insert(vect.begin()+1,2,11);
    cout<<"Elements after insertion: ";
    for(auto it:vect)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    // size
    cout<<"Size of vector is: "<<vect.size();
     
    // some other functions
    // pop_back() // last element gets deleted
    // swap()
    // clear() // erases the entire vector
    return 0;
}