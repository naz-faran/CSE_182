/*Write a C++ program to understand how the addresses
can be passed as arguments to a function.*/
#include <iostream>
using namespace std;

void swap(int *a, int *b);

int main()
{
    int num1 = 20, num2 = 40;
    cout << num1 << " " << num2<<endl;

    swap(&num1, &num2);
    cout << num1 << " " << num2;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
