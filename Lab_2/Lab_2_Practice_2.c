#include <stdio.h>

int main()
{
    int r, d;
    float c, area;

    printf("Enter the radius of a circle:\n");
    scanf("%d", &r);
    d=2*r;
    c= 2*3.1416*r;
    area = 3.1416 * r * r;
    printf("Diameter= %d\nCircumterence= %f\nArea= %f", d,c,  area);
    return 0;
}
