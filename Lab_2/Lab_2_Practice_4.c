#include <stdio.h>

int main()
{
    float celsius, Fahrenheit;
    printf("Enter temperature in Celsius: \n");
    scanf("%f", &celsius);
    Fahrenheit = ((celsius*9)/5) +32;
    printf("%f Celsius = %f Fahrenheit", celsius, Fahrenheit);
}
