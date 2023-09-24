//Write a C++ program to print the sum of array elements using recursion.

#include <iostream>
using namespace std;

int sumarr(int arr[], int size);

int main()
{
    int arr[]={5, 6, 3, 6, 3, 7, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Sum of the array = "<< sumarr(arr, n);
    return 0;
}

int sumarr(int arr[], int size)
{
    if (size<=0)
    {
        return 0;
    }
    return (arr[size-1] + sumarr(arr, size-1));
}