// A C Program to demonstrate the use of nested for loop.

#include <stdio.h>

int main()
{
    int a, b;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
