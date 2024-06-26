#include<iostream>
using namespace std;
void doSomething(int arr[],int n)
{
    arr[0]+=10;
    cout<<"Value inside doSomething function is: "<<arr[0]<<endl;
}
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
    doSomething(arr,n);
    cout<<"Value inside int main function: "<<arr[0];
    return 0;
}

// passing array to the function is always pass by reference