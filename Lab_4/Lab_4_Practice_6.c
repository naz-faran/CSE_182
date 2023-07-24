/*6. Write a C program to find first and last digit of any number.*/

#include <stdio.h>

int main()
{
    int num, l_num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    l_num = num % 10;

    while (num / 10 != 0)
    {
        num /= 10;
    }

    printf("First Digit: %d\nLast Digit: %d", num, l_num);

    return 0;
}