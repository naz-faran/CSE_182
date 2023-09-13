/*matrix multiplication*/ /*convulation --multipli then sum*/

#include <iostream>
using namespace std;

int main()
{
    float m[3][3], n[3][3], result[3][3];
    float value=0;

    cout<<"Enter first matrix (A): ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>m[i][j];
        }
    }

    cout<<"Enter second matrix (B): ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>n[i][j];
        }
    }


    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                value += m[i][k] * n[k][j];

            }
            result[i][j] = value;
            value=0;
        }
    }   

    cout<<"AB = "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<result[i][j];
        }
        cout<<endl;
    }
    

    

    return 0;
}
