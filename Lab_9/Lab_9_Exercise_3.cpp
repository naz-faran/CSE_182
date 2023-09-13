/*Write a C++ program to demonstrate the use of function type-3.*/

/*argument pass and value return*/

#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int n, m, sum;
    cout << "Enter two interger: ";
    cin >> n >> m;
    sum = add(n, m);
    cout << "Sum = " << sum;
    return 0;
}