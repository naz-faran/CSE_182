/*Write a C++ program to find the lower triangular matrix.*/

#include <iostream>
using namespace std;

int main()
{
    int row, col;
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
        for (int j = 0; j < col; j++)
        {
            if (i < j && arr[i][j] != 0)
            {
                cout << "The matrix is not Lower trianguler Matrix";
                goto end;
            }
        }
    }
    cout << "The matrix is Lower trianguler Matrix";
end:

    return 0;
}