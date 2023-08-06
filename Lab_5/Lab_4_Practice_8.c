/*Write a C program to check whether a number is Strong number or not.*/

/*Strong number is a special number whose sum of the factorial
of digits is equal to the original number.*/

#include <stdio.h>

int factorial(int a);

int main()
{
    int j, n, digit, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    j = n;
    while (j)
    {
        digit = j % 10;
        sum += factorial(digit);
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

int factorial(int a)
{
    int fact = 1;
    for (int i = a; i > 0; i--)
    {
        fact *= i;
    }
    return fact;
}