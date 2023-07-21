/*Write a C program to relate the two integers using equal, greater or less symbol.*/

#include <stdio.h>
int main()
{
    int num_1, num_2;
    printf("Enter two integers: ");
    scanf("%d %d", &num_1, &num_2);
    if (num_1 == num_2)
    {
        printf("Result: %d = %d", num_1, num_2);
    }
    else if (num_1 > num_2)
    {
        printf("Result: %d > %d", num_1, num_2);
    }
    else
    {
        printf("Result: %d < %d", num_1, num_2);
    }
    return 0;
}