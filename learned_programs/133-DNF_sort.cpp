/*
DNF-Dutch National FLag--> also called (0,1,2) sort

--> used for sorting  an array with three elements--> 0,1,2;

0--> zeroes(RED)
1--> ones(white)-->low
1 to 2-->unknown()-->mid
2--> twos(blue)-->high

It symbolises the dutch national flag, hence DNF algorithm

logic:
if 0, swap arr[low] and arr[mid], low++,mid++;
if 1, mid++;
if 2, swap arr[mid] and arr[high],high--;

exit if(mid==high)

Example:1 1 2 0 0 1 2 2 1 0

*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*

Time complexity of DNF-sort
T=O(N)
-In each operation, either mid gets incremented or high gets decremented
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void dnfSort(int arr[], int n)
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main()
{
    int arr[]={1,0,2,1,0,1,2,1,2},n=sizeof(arr)/sizeof(arr[0]);
    dnfSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}