/*
Maximum Circular Subarray Sum:

Case 1:
    
    Case not solvable using kadane's algorithm, but solved using max element of array
    {-1 -2 -3 -4 -5}
    Max subarray sum = max({-1 -2 -3 -4 -5})=-1

    end, no need to go ahead.


Case 2:
    Case can be handled using kadane's algorithm
    {-1 4 -6 7 5 -4}    --> No wrapping needed --> Max Sum =12
    Non contributing elements: -4 -1 4 -6
    contributing elements: 7 5


Case 3:
    Case can't be handled just by using kadane's algorithm
    {4 -4 6 -6 10 -11 12}   --> Wrapping needed --> Max Sum =22=12+4-4+6-6+10
    Non contributing elements: -11
    contributing elements: 12 4 -4 6 -6 10

    Max subarray sum = total sum of array -(sum of non contributing elements)

How to find the sum due to non contributing elements:

for Case 3:
-->reverse the sign's of each element of the array and store it in another array
    {-4 4 -6 6 -10 11 -12}
-->Apply kadane's Algorithm:
    max possible sum of subarray for the inverted array:11-->Sum of non-contributing element
-->store the sum in the reversed sign--> -11

Actaully finding non contributing elements using additive-inverse array and applying kadane's algorithm is only possible if the array is a  wrapping type.

We are actually going to do the solution by kadane's and (Max subarray sum = total sum of array -(sum of non contributing elements)) and then take the maximum of both.

if array is of non wrapping type sum obtained by kadane's algo will be greater than the other method. If it is non wrapping type, then the opposite is true

*/

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

int kadanesAlgo(int n,int arr[]);
int main()
{
    int n,wrapSum,nonWrapSum,sum=0;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n],addInv[n],mx=INT_MIN;
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        addInv[i]=-arr[i];
        mx=max(arr[i],mx);
        sum+=arr[i];
    }
    if(mx<0)
    {
        cout<<"The max possible sum of subarray is: "<<mx<<endl;
        return 0;
    }
    wrapSum=kadanesAlgo(n,arr);
    nonWrapSum=sum+kadanesAlgo(n,addInv);
    cout<<"The max possible sum of circular subarray is : "<<max(wrapSum,nonWrapSum);
    return 0;
}

int kadanesAlgo(int n,int arr[])
{
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
    return mSum;
}

