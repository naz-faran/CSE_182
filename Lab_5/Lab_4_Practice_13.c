/*Write a C program to create Simple Calculator using switch case.*/

#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%d / %d = %d\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Invalid operator\n");
    }