/*
Maximum Sum subarray problem:
Find the subarray in the given array that has the maximum sum:
Note: The solution below is a bruteforce approach.
*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The entered array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int maxSum=INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     int sum=0;
    //     for(int j=i;j<n;j++)
    //     {
    //         sum+=arr[j];
    //     }
    //     maxSum=max(maxSum,sum);
    // }

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=arr[k];
            }
        maxSum=max(maxSum,sum);
        }
    }

    cout<<"The subarray with the max possible sum is:"<<endl;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=arr[j];
            if(sum==maxSum)
            {
                for(int k=i;k<=j;k++)
                {
                    cout<<arr[k]<<" ";
                }
            }
        }
    }
    cout<<"and the max sum is:"<<maxSum<<endl;
    return 0;
}