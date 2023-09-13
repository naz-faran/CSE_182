/*Write a C++ program to demonstrate the use of function type-2.*/

/*No argument pass but value return*/

#include <iostream>
using namespace std;

int add()
{
    int n, m;
    cout << "Enter two interger: ";
    cin >> n >> m;
    return n + m;
}

int main()
{

    int sum;
    sum = add();
    cout <<"Sum = "<< sum;
    return 0;
}