#include <stdio.h>

int main()
{
    int a;
    printf("Enter a Number:\n");
    scanf("%d", &a);
    (a%2==0)? (printf("%d is Even number",a)): (printf("%d is Odd number",a));
}
