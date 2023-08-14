/*Write a C program to check whether a number is Strong number or not.*/

/*Strong number is a special number whose sum of the factorial
of digits is equal to the original number.*/

#include <stdio.h>

int main()
{
    int j, n, sum = 0, fact;
    printf("Enter the number: ");
    scanf("%d", &n);
    j = n;
    while (j)
    {
        fact = 1;
        for (int i = j % 10; i > 0; i--)
        {
            fact *= i;
        }

        sum += fact;
        j /= 10;
    }
    if (sum == n)
    {
        printf("%d is a strong number", n);
    }
    else
    {
        printf("%d is not a strong number", n);
    }

    return 0;
}