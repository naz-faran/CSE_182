/*A C++ Program to find the position of an element from the list of elements. [Linear Search]*/

#include <iostream>
using namespace std;

int main()
{
    int n, find, i;
    bool flag = 0;
    cout << "Enter the number of element: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the searching element: ";
    cin >> find;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == find)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        cout << "The element " << find << " is found at location: " << i + 1;
    }
    else
    {
        cout << "The element " << find << " is not in the list." << endl;
    }

    return 0;
}