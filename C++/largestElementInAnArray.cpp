#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of elements in an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<largest<<" is the largest element";
    return 0;
}