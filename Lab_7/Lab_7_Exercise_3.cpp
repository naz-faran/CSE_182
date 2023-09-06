/*A C++ Program to search an element from the array. [Binary Search]*/

#include <iostream>
using namespace std;
int main()
{
    int beg, last, mid, flag = 0, find;
    int arr[15] = {3, 11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 91, 99};
    beg = 0;
    last = 14;
    cout << "Enter the searching element: ";
    cin >> find;

    while (last >= beg)
    {
        mid = (beg + last) / 2;
        if (find > arr[mid])
        {
            beg = mid + 1;
        }
        else if (find < arr[mid])
        {
            last = mid - 1;
        }
        else
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "The element " << find << " is found at location: " << mid + 1;
    }
    else
    {
        cout << "The element " << find << " is not in the list." << endl;
    }

    return 0;
}