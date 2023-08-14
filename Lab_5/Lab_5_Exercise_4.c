/*A C Program to demonstrate the use of switch statement.*/

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character a to d: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("Case: a");
        break;
    case 'b':
        printf("Case: b");
        break;
    case 'c':
        printf("Case: c");
        break;
    case 'd':
        printf("Case: d ");
        break;
    default:
        printf("Default ");
    }
    return 0;
}