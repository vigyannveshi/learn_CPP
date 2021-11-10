/*
    Maximum sum of subarray using Kandane's Algorithm:
    Variables: cSum, mSum

    Example:
    Array:                -1 4 -6 7 -4
    Cummulative Sum:      -1-->update to 0 
    Cummulative Sum:       0 
    Cummulative Sum:       0 4 -2-->update to 0
    Cummulative Sum:       0 4  0 7  3
    Maximum possible sum of subarray = 7
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
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
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
    cout<<"Max possible sum of subarrays: "<<mSum;
    return 0;
}