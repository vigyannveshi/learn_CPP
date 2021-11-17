/*
Check if an array is sorted or not:
{1,2,3,4,5,6,7}--> Strictly increasing (ascending)

logic:
Check if:
array[0]<array[1]--> starter for recursion to occur.
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

bool sorted(int arr[], int n);

int main()
{
    int arr1[7] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[7] = {1, 2, 3, -5, 5, 6, 7};
    if (sorted(arr2, 7))
    {
        cout << "Entered array is sorted" << endl;
    }
    else
    {
        cout << "Entered array is not sorted" << endl;
    }
    return 0;
}

bool sorted(int arr[], int n)
{
    if (n == 1) // If only one element exists then array is sorted
    {
        return true;
    }

    bool restArray = sorted(arr + 1, n - 1);
    /*
    Here arr+1 means the element after the 0th element because only arr is actually the address of the 0th element of the array { arr is typically a pointer pointing to 0th element of array, and arr+1-->pointer arithmetic, it will shift the pointer to address of 1st element of the array}, as recursion continues it will move ahead to second, third... and so on.
    */
    return ((arr[0] < arr[1]) && restArray);
}