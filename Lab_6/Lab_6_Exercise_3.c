/*matrix multiplication*/

#include <stdio.h>

int main()
{
    float m[3][3], n[3][3], result[3][3];
    float value=0;

    printf("Enter first matrix (A): ");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }

    printf("Enter second matrix (B): ");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%f", &n[i][j]);
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

    printf("AB = \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2.2f  ", result[i][j]);
        }
        printf("\n");
    }
    

    

    return 0;
}
