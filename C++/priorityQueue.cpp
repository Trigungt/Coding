#include<bits/stdc++.h>
using namespace std;
int main()
{
    // max heap
    priority_queue<int>pq;
    pq.push(1); // 1
    pq.push(2); // 2 1
    pq.push(3); // 3 2 1
    cout<<pq.top()<<endl; // 3
    pq.pop(); // 2 1
    cout<<pq.top()<<endl; // 2

    // min heap
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(1); // 1
    pq1.push(2); // 2
    pq1.push(3); // 3
    cout<<pq1.top(); // 1
    return 0;
}