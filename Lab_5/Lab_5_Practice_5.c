/*Write a C program to print all Prime numbers between 1 to n.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, flag;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Prime number between 1 to %d :", n);

    for (int i = 1; i <= n; i++)
    {
        flag = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf(" %d", i);
        }
    }

    return 0;
}