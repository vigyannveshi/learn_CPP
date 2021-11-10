/*
Cummulative sum approach to find max sum of subarrays:
Consider array:
-1 4 7 2
find sum upto that particular and store it an array
-1 3 10 12-->Cummulative sum array

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
    int arr[n],cSum[n+1];
    cSum[0]=0;
    cout<<"Enter the elements in the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"The array entered is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    for(int i=1;i<=n;i++)
    {
        cSum[i]=cSum[i-1]+arr[i-1];
    }

    int maxSum=INT_MIN;

    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=0;j<i;j++)
        {
            sum=cSum[i]-cSum[j]; 
            maxSum=max(maxSum,sum);
        }
    }

    cout<<endl<<"The max possible sum of subarray is: "<<maxSum;
    return 0;
}






