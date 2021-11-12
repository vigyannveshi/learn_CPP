/*
Improving time complexity of pair sum problem:

Need of a sorted array:

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
    /*Sort the array: Insertion Sort*/
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    (pairSum(n,arr,k))?cout<<"The array contains two elements with pair sum = "<<k:cout<<"The array doesn't contain two elements with pair sum = "<<k;
    return 0;
}

bool pairSum(int n, int arr[], int k)
{
    int low=0, high=n-1;
    while(low<high)
    {
        if(k==(arr[low]+arr[high]))
        {
            cout<<endl<<arr[low]<<" + "<<arr[high]<<" = "<<k<<endl;
            return 1;
        }
        else if(k<(arr[low]+arr[high]))
        {
            high--;
        }
        else if(k>(arr[low]+arr[high]))
        {
            low++;
        }
    }
    return 0;
}


