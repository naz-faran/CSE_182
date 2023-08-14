/*Write a C program to enter any number and check whether the number is
palindrome or not.*/

#include <stdio.h>

int main()
{
    int i, n, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    i = n;
    while (i != 0)
    {
        rev = rev * 10 + i % 10;
        i /= 10;
    }

    if (n == rev)
    {
        printf("The number is palindrome");
    }
    else
    {
        printf("The number is not palindrome");
    }

    return 0;
}