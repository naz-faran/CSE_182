//a C++ program to calculate the factorial of a number using recursion.


#include <iostream>
using namespace std;

int factorial(int a);

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Factorial of " << n << " is " << factorial(n);
    return 0;
}

int factorial(int a)
{
    if (a == 0)
    {
        return 1;
    }
    return a * factorial(a - 1);
}