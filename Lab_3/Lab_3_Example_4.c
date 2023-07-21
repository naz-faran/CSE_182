/* Write a C program to calculate grade */

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks between 00 to 100: ");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("Grade A+");
    }
    else if (marks >= 75 && marks < 80)
    {
        printf("Grade A");
    }
    else if (marks >= 70 && marks < 75)
    {
        printf("Grade A-");
    }
    else if (marks >= 65 && marks < 70)
    {
        printf("Grade B+");
    }
    else if (marks >= 60 && marks < 65)
    {
        printf("Grade B");
    }
    else if (marks >= 55 && marks < 60)
    {
        printf("Grade B-");
    }
    else if (marks >= 50 && marks < 55)
    {
        printf("Grade C+");
    }
    else if (marks >= 45 && marks < 50)
    {
        printf("Grade C");
    }
     else if (marks >= 40 && marks < 45)
    {
        printf("Grade D");
    }
    else if (marks >= 0 && marks < 40)
    {
        printf("Grade F");
    }
    else
    {
        printf("Input marks is not between 00 to 100");
    }

    return 0;
}
