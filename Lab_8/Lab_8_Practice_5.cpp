/*Write a C++ program to find the sum of the main diagonal elements of a matrix.*/
#include <iostream>
using namespace std;
int main()
{
    int r, c, i, j, sum=0;

    cout << "Enter the number of rows and columns : ";
    cin >> r >> c;
    int m[r][c];

    cout << "Enter the elements of matrix: " << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> m[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        sum+=m[i][i];
    }

    cout<<"Sum of the main diagonal elements is "<<sum;

}