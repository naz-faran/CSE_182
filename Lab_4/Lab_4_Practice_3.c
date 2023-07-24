/*3. Write a C program to print all even numbers between 1 to 100.- using while loop*/

#include <stdio.h>
int main()
{
    int num = 2;

    while (num <= 100)
    {
        printf("%d ", num);
        num += 2;
    }
    return 0;
}