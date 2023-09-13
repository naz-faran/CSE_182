/*a C++ program to add two matrices.*/

#include <iostream>
using namespace std;

int main()
{
    int m[3][3] = {{3, 4, 5},
                   {7, 4, 2},
                   {4, 9, 0}};
    int n[3][3] = {{4, 4, 0},
                   {8, 6, 3},
                   {3, 1, 2}};
    int result[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = m[i][j] + n[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}