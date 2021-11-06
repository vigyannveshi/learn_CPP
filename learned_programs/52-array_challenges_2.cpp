/*
    Sum of all subarrays
    Problem:
        Given an array a[] of size n. Output sum of each subarray of given array.

    Example and Approach:
    
    consider arr[]={1,2,2};

    subarrays:
        [{1},{1,2},{1,2,2},{2},{2,2},{2}]

    Respective Sum = [{1},{3},{5},{2},{4},{2}];

    1)Iterate over all the subarrays
        using nested loop
            for(int i=0;i<n;i++)
            {
                for(int j=i;j<n;j++)
                {
                    compute sum[i...j];
                }
            }
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
    int n, arr[1000];
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array entered is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"The sum of the subarrays of the array entered is:";
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            cout<<sum<<" ";
        }
    }
    return 0;
}