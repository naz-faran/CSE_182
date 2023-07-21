/*1. Write a C program to find maximum between three numbers.*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three integer: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Max = %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Max = %d", b);
    }
    else
    {
        printf("Max = %d", c);
    }

    return 0;
}