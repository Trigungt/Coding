#include<iostream>
using namespace std;
int main()
{
    int score;
    cout<<"Enter score: ";
    cin>>score;
    if(score>=80)
    {
        cout<<"Well done!";
    }
    else if(score>=50)
    {
        cout<<"Can improve";
    }
    else
    {
        cout<<"Poor performance";
    }
    return 0;
}
