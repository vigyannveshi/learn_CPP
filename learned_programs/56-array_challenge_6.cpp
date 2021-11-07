/*
Sub array with given sum:--> Google, Facebook, Microsoft ,Amazon,Visa

Problem:
Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.

Constraints:
1<=N<=10^5
0<=Ai<=10^10

Example:
Input:
N=5,S=12;
A[]={1,2,3,7,5}
Output:2 4 
Explaination: The  sum of elements from 2nd position to 4th position is 12.

-->Brute force approach:
Find sum of all possible subarrays. If any of the sum equates to S, output the starting and ending index of the subarray.-->O(n^2)

-->Optimised approach:(Two pointer approach)
-->Keep two pointers st and en, and a variable called currSum for sum from st to en.
-->Increment en till currSum + a[en]>S.
-->Start increasing st until currSum<=S.
-->O(n).         
*/

// #include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n,s,arr[1000];
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the sum of subarray:"<<endl;
    cin>>s;
    // int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0,j=0,st=-1,en=-1,currSum=0;
    while(j<n&&currSum+arr[j]<=s)
    {
        currSum+=arr[j];
        j++;
    }
    if(currSum==s)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    
    while(j<n)
    {
        currSum+=arr[j];
        while(currSum>s)
        {
            currSum-=arr[i];
            i++;
        }
        if(currSum==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en;

    return 0;
}

