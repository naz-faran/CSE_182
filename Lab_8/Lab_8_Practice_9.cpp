/*Write a C++ program to check whether a matrix is sparse or not.*/

/*A sparse matrix is a special case of a matrix
in which the number of zero elements is much
higher than the number of non-zero elements*/

#include <iostream>
using namespace std;

int main()
{
    int row, col, count = 0;
    cout << "Input the value of ROW and COL : ";
    cin >> row >> col;
    int arr[row][col];

    cout << "Enter the element of matrix: ";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count > (row * col / 2))
    {
        cout << "The matrix is sparse";
    }
    else
    {
        cout << "The matrix is not sparse";
    }
}