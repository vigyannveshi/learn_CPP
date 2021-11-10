/*
Pair sum problem:
Check if there exists  two elements in an array such that their sum is equal to given k, return true or false.
-->Done using brute force:
*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

bool pairSum(int n, int arr[],int k);

int main()
{
    int n,k;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    cout<<"Enter the value of pair sum:"<<endl;
    cin>>k;
    cout<<"Enter the elements of the array:"<<endl;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The entered array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    (pairSum(n,arr,k))?cout<<"The array contains two elements with pair sum = "<<k:cout<<"The array doesn't contain two elements with pair sum = "<<k;
    return 0;
}

bool pairSum(int n, int arr[], int k)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)    
        {
            if((arr[i]+arr[j])==k)
            {
                cout<<endl<<arr[i]<<" + "<<arr[j]<<" = "<<k<<endl;
                return 1;
            }
        }
    }
    return 0;
}

