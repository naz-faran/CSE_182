/*Write a C program to check whether a number is Prime number or not.*/
#include <stdio.h>
#include<math.h>

int main()
{
    int n, flag = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int j = 2; j <= sqrt(n); j++)
    {
        if (n % j == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not prime number", n);
    }
    return 0;
}