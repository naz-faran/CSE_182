/*Write a C++ program to check whether a
matrix is an identity matrix or not.*/

#include <iostream>
using namespace std;

int main()
{
    int row, col, count = 0;
    cout << "Input the value of ROW and COL : ";
    cin >> row >> col;
    int arr[row][col];
    bool flag = 1;

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
        for (int j = 0; j < col; j++)
        {
            if (i == j && arr[i][j] != 1)
            {
                cout << "The metrix is not identity matrix";
                goto end;
            }
            else if (i != j && arr[i][j] != 0)
            {
                cout << "The metrix is not identity matrix";
                goto end;
            }
        }
    }
    cout << "The matrix is identity matrix";
end:
}