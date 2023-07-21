/*4. Write a C program to check whether a year is leap year or not.*/

#include <stdio.h>

int main()
{
    int year;
    printf("input the year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is Leap Year", year);
    }
    else
    {
        printf("%d is not Leap Year", year);
    }

    return 0;
}