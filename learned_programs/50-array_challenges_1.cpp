/*
Problem:
Given an array a[] of size n. For every i from 0 to n-1 output max(a[0],....,a[i]).

 1   0   5   4   6   8
(0) (1) (2) (3) (4) (5)

Max till i
(0) (1) (2) (3) (4) (5)
 1   1   5   5   6   8

Solution:
1)  Keep a variable mx which stores the maximum till ith element.
2)  Iterate over the array and update

Note: Time Complexity = n;
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n, arr[1000],mx;
    cout<<"Enter the size of the array:";
    cin>>n;
    
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The entered array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    mx=arr[0];
    for(int i=0;i<n;i++)
    {
        arr[i]=max(mx,arr[i]);
    }

    cout<<"The maxed out array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}