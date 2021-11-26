/*
Wave Sort:
arr[0]>=arr[1]<=arr[2]>=arr[3]<=arr[4]>=arr[5]<=.....

example:1 3 4 7 5 6 2

Algorithm:
for(int i=1 to n-1)
{
    if(arr[i]>arr[i-1])
    {
        swap(arr[i],arr[i-1]);
    }
    if(arr[i]>arr[i+1]&&i<=n-2)
    {
        swap(arr[i],arr[i+1])
    }
    i+=2;
}

*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*
Time complexity of wave sort:

we have used a for loop, with jump of 2 elements
T=O(N/2)=O(N)

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void waveSort(int arr[], int n)
{
    for (int i = 1; i <= n-1 ; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int arr[] = {1, 3, 4, 7, 5, 6, 2}, n = sizeof(arr) / sizeof(arr[0]);
    waveSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}