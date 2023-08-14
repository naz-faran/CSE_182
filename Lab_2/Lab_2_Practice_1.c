#include <stdio.h>

int main()
{
    int a, b, c, P, area;

    printf("Enter length and breadth:\n");
    scanf("%d%d", &a, &b);
    P=(a+b)*2;
    area= a*b;
    printf("Perimeter = %d\nArea= %d", P, area);
    return 0;
}
