#include <stdio.h>
#include<math.h>

int main()
{
    int a, b, c, p;
    float s, area;

    a=3;
    b=4;
    c=5;
    p=a+b+c;
    s= (a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Perimeter = %d\nArea= %f", p, area);
    return 0;
}
