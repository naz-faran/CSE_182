/*Write a C++ program to get the largest
element of an array using the function.*/

#include <iostream>
using namespace std;

int largenum(int arr[], int size)
{
    int max = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

    cout << "Largest element of an array: " << largenum(arr, n);
}