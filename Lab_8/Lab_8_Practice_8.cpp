/*Write a C++ program to find the sum of the upper triangular matrix.*/

#include <iostream>
using namespace std;

int main()
{
    int row, col, sum=0;
    cout << "Input the value of ROW and COL : ";
    cin >> row >> col;
    int arr[row][col];

    cout << "Enter the element of matrix: ";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = i ; j < col; j++)
        {
            sum+=arr[i][j];
        }
    }
    cout << "Sum = "<<sum;;

    return 0;
}