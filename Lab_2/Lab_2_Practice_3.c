#include <stdio.h>

int main()
{
    float cm, m, km;

    printf("Enter length in centimeter: \n");
    scanf("%f", &cm);
    m=cm/100;
    km=m/1000;

    printf("%f cm= %f m\n%f cm=%f Km", cm, m, cm, km);

}
