#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    s.push(1); // 1
    s.push(2); // 2 1
    s.push(3); // 3 2 1
    s.push(4); // 4 3 2 1

    cout<<s.top()<<endl; // 4
    s.pop(); // s looks like 3 2 1
    cout<<s.top()<<endl; // 3
    cout<<s.size()<<endl;
    cout<<s.empty();
    return 0;
}

// stack follows LIFO --> last in first out