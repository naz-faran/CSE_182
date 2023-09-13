//calculator

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int multiplication(int a, int b)
{
    return a * b;
}
int division(int a, int b)
{
    return a / b;
}

int main()
{
    int n, m, result;
    char x;
    cout << "Enter the equation: ";
    cin >> n >> x >> m;

    switch (x)
    {
    case '+':
        result = add(n, m);
        break;
    case '-':
        result = sub(n, m);
        break;
    case '*':
        result = multiplication(n, m);
        break;
    case '/':
        result = division(n, m);
        break;
    default:
        cout << x << " This sign is not found";
        goto end;
    }

    cout << n << " " << x << " " << m << " = " << result;
end:
    return 0;
}