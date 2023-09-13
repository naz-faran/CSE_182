/*Write a C++ program to find the sum of two
one-dimensional arrays using the function.*/

#include <iostream>
using namespace std;

void sumArrays(int arr1[], int arr2[], int result[], int size)
{
    for (int i = 0; i < size; i++)
    {
        result[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    int size;

    cout << "Enter the size of the arrays: ";
    cin >> size;

    int arr1[size], arr2[size], result[size];

    cout << "Enter elements of the first array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter elements of the second array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }

    sumArrays(arr1, arr2, result, size);

    cout << "Sum of the two arrays: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}