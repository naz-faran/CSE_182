/*Write a C++ Program to change the value of
a constant integer using pointers.*/

#include <iostream>
using namespace std;

int main()
{
    /* const int num = 10; cannot be changed,
    and displays an error when using a pointer*/

        /*     ¯\_(ツ)_/¯     */

    int num = 10;
    int *ptr = &num;

    cout << "Original value: " << num<< endl;

    *ptr = 20;

    cout << "Modified value: " << num << endl;

    return 0;
}