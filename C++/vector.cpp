#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    cout<<v[1]<<endl; // generally emplace_back is faster than push_back

    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4); // no need to give curly braces while using emplace_back
    cout<<vec[1].second<<endl;

    vector<int>vect;
    vect.emplace_back(10);
    vect.emplace_back(11);
    vect.emplace_back(12);
    vector<int>::iterator it=vect.begin();
    it++;
    cout<<*(it)<<endl;

    // functions involved in vector
    // v.end()
    // v.rend()
    // v.rbegin()

    // we can replace vector<int>::iterator by auto 
    for(auto it=vect.begin();it!=vect.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // another method
    for(auto it:vect)
    {
        cout<<it<<" ";
    }
    return 0;
}