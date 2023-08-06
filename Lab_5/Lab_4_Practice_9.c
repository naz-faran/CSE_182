/*Write a C program to print Fibonacci series up to n terms.*/
#include <stdio.h>

int main()
{
    int n, num1 = 0, num2 = 1, fibo = 1;
    printf("Fibonacci series up to: ");
    scanf("%d", &n);
    printf("Fibonacci series: %d", num1);
    while (fibo <= n)
    {
        printf(" %d", fibo);
        fibo = num1 + num2;
        num1 = num2;
        num2 = fibo;
    }

    return 0;
}