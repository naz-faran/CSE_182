#include<stdio.h>

int main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    ((year%4==0 && year%100!=0) || year%400==0)? (printf("%d was Leap Year", year)) :(printf("%d was not Leap Year", year));

    return 0;
}
