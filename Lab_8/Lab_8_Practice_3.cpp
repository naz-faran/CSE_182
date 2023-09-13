/*Write a C++ program to perform Scalar matrix multiplication.*/

#include <iostream>
using namespace std;
int main()
{
    int r, c, i, j, num;
    cout << "Enter the number of rows and colums: ";
    cin >> r >> c;
    int m[r][c];

    cout << "Enter the  matrix elements" << endl;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> m[i][j];
        }
    }
    cout << "Enter a scaler number: ";
    cin >> num;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            m[i][j] = num * m[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}