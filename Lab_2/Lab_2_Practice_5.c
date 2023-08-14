#include <stdio.h>

int main()
{
    int days,week, month, year;
    printf("Enter number of Days: ");
    scanf("%d", &days);
    year = days/365;
    days= days%365;
    month =days/30;
    days = days%30;
    week = days/7;
    days = days%7;

    printf("%d Year(s) %d Month(s) %d Week(s) and %d Day(s)", year, month, week, days);
}
