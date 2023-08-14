/*Write a C program to find sum of all prime numbers between 1 to n.*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n, flag, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

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
            sum += i;
        }
    }
    printf("Sum of all prime numbers between 1 to %d = %d", n, sum);

    return 0;
}