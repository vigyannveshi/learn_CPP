/*
    Solution to problem in kadane's Algorithm:

    Actually we just need to check that atleast one element of the entered array is positive or atleast 0. If all are negative, then max possible sum of sub array = max[all elements in the array]
    Actually when we take input of array elements, initialise a third variable mx and store the max value of element in the array.

    if mx<0 --> all elements of the array must be negative, so return mx as the max possible sum of subarray, else continue with kadane's algorithm.

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
    int arr[n],mx=INT_MIN;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mx=max(arr[i],mx);
    }
    if(mx<0)
    {
        cout<<"The max possible sum of subarray is: "<<mx<<endl;
        return 0;
    }
    int cSum[n+1],mSum=INT_MIN;
    cSum[0]=0;
    for(int i=1;i<=n;i++)
    {
        if((cSum[i-1]+arr[i-1])>0)
        {
            cSum[i]=cSum[i-1]+arr[i-1];
        }
        else
        {
            cSum[i]=0;
        }
        mSum=max(mSum,cSum[i]);
    }
    cout<<"Max possible sum of subarray: "<<mSum;
    return 0;
}