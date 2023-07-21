/*Write a C program that will evaluate the ratio of (a + b) to (c –d)
and will print the result, if c – d is not equal to zero. The four
values a, b, c and d should be taken from the output terminal.*/

#include <stdio.h>
int main()
{
    float ratio, a, b, c, d;
    printf("Enter four integer values: \n");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    if ((c - d) != 0)
    {
        ratio = (a + b) / (c - d);
        printf("Ratio = %f", ratio);
    }
    else{
        printf("%f - %f = 0", c, d);
    }
    return 0;
}
