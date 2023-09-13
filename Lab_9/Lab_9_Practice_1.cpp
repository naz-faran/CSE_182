// Write a C++ program to add, subtract, multiply and divide two integers
// using the following types of user-defined functions -
// • No Argument Passed and No return value
// • No Argument Passed but return a value
// • Argument Passed but no return value
// • Argument passed and returns a value

#include <iostream>
using namespace std;

void add()
{
    int a, b;
    cout << "Enter two integer: ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << a + b;
}
int sub()
{
    int a, b;
    cout << "Enter two integer: ";
    cin >> a >> b;
    return a - b;
}
void multiply(int a, int b)
{

    cout << a << " * " << b << " = " << a * b;
}
float division(int a, int b)
{
    return (float)a / (float)b;
}

int main()
{
    int n, m, result;
    char x;
    cout << "Enter the type of operation ( + , - , * , / ): ";
    cin >> x;

    switch (x)
    {
    case '+':
        // No Argument Passed and No return value
        add();
        break;
    case '-':
        // No Argument Passed but return a value
        result = sub();
        cout << "Result: " << result;
        break;
    case '*':
        // Argument Passed but no return value
        cout << "Enter two integer: ";
        cin >> n >> m;
        multiply(n, m);

        break;
    case '/':
        // Argument passed and returns a value
        cout << "Enter two integer: ";
        cin >> n >> m;
        cout << "Result = " << division(n, m);
        break;
    default:
        cout << x << " This sign is not found";
    }

    return 0;
}