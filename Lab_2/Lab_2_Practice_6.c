#include <stdio.h>

int main()
{
    int a,b,c, max_1, max_2;
    printf("Enter three number: \n");
    scanf("%d%d%d", &a, &b, &c);
    max_1 = (a>b)? a:b;
    max_2 = (b>c)? b:c;
   (max_1>max_2)? (printf("Max = %d", max_1)) :(printf("Max = %d", max_2));
}
