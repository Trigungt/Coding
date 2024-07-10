#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(1); // 1
    q.push(2); // 1 2
    q.push(3); // 1 2 3
    q.push(4); // 1 2 3 4
    q.back()+=6;
    cout<<q.back()<<endl; // 10
    cout<<q.front()<<endl; // 1
    q.pop(); // 2 3 4
    cout<<q.front(); // 2
    return 0;
}

// queue follows FIFO ---> first in first out 