#include<iostream>
using namespace std;
int main()
{
    // 1D array
    int arr[3];
    cout<<"Enter the elements of array: ";
    cin>>arr[0]>>arr[1]>>arr[2];
    cout<<"Entered elements are: "<<endl<<arr[0]<<endl<<arr[1]<<endl<<arr[2]<<endl;

    // 2D array
    int a[2][3];
    a[1][2]=45;
    cout<<"Value entered at a[1][2] is: "<<a[1][2];
    return 0;
}