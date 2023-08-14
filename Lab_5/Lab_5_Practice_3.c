/*Write a C program to find LCM of two numbers.*/
#include <stdio.h>

int main()
{
    int num1, num2, max;
    printf("Enter two number: ");
    scanf("%d%d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;
    for (int i = max;; i++)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            printf("LCM = %d", i);
            break;
        }
    }
    return 0;
}