 /*

 Sorting of array: Selection Sort:
 logic:
 Find the minimum element in unsorted array and swap it with the element at begining

 Note:unsorted portion of the array is enclosed in curly braces

 Suppose we have an array: 
 {12,45,23,51,19,8} -->Unsorted array
 8,{45,23,51,19,12}
 8,12,{23,51,19,45}
 8,12,19,{51,23,45}
 8,12,19,23,{51,45}
 8,12,19,23,45,51   -->Array sorted in ascending order

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
    cout<<"Enter the size of array:";
    cin>>n;

    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Entered array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"Array sorted in ascending order:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}