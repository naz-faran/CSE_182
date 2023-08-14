/*Write a C program to enter any number and print its prime factors.*/
#include <stdio.h>
#include<math.h>

int main()
{
    int n, flag;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Prime factors :");

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
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
    }

    return 0;
}