/*Write a C program to find HCF (GCD) of two numbers.*/
#include <stdio.h>

int main()
{
    int num1, num2, min, gcd = 0;
    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);

    min = (num1 < num2) ? num1 : num2;

    for (int i = 1; i <= min; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD = %d", gcd);

    return 0;
}