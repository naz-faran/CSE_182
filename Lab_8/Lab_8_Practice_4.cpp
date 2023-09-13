/*Write a C++ program to check whether two matrices are equal or not.*/

#include <iostream>
using namespace std;
int main()
{
    int r, c, i, j;

    cout << "Enter the number of rows and columns : ";
    cin >> r >> c;
    int m[r][c], n[r][c];

    cout << "Enter the elements of first matrix: " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> m[i][j];
        }
    }

    cout << "Enter the elements of second matrix: " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> n[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {

            if (m[i][j] != n[i][j])
            {
                cout << "Given two matrices are not equal" << endl;
                goto end;
            }
        }
    }

    cout << "Given two matrices are equal" << endl;
end:

    return 0;
}