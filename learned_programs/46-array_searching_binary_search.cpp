/*
Searching an element in an array using binary search:
--> Needs a sorted array, either ascending or descending
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int binarySearch(int arr[], int n, int val);
int main()
{
    int n,arr[1000],val;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of element to search its index:"<<endl;
    cin>>val;
    if(!(binarySearch(arr,n,val)))
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<"The element "<<val<<" is located at index:"<<binarySearch(arr,n,val)<<endl;
    }
    return 0;
}

/*Binary search implementation*/
int binarySearch(int arr[], int n, int val)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==val)
        {
            return mid;
        }
        else if(arr[mid]>val)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return 0;
}
