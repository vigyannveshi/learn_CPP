/*

Array Sorting:Bubble sort

Called bubble sort, because as the bubble raises up similarly (largest/smallest element as per need) comes to the end of the array

logic:
Repeatedly swap two adjacent elements if they are in wrong order

 Suppose we have an array:(to sort ascending)
 12,45,23,51,19,8 -->Unsorted array
 <--Step 1-->
a) {12,45},23,51,19,8 -->Check two elements and swap them if they are in wrong order
b) 12,{45,23},51,19,8 -->Check two elements and swap them if they are in wrong order
c) 12,23,{45,51},19,8 -->Check two elements and swap them if they are in wrong order
d) 12,23,45,{51,19},8 -->Check two elements and swap them if they are in wrong order
e) 12,23,45,19,{51,8} -->Check two elements and swap them if they are in wrong order
f) 12,23,45,19,8,51
 <--At this step the largest element reaches last i.e. only last element get sorted-->

 <--Go back to start and begin once more-->
 <--Step 2-->
a) {12,23},45,19,8,51 -->Check two elements and swap them if they are in wrong order
b) 12,{23,45},19,8,51 -->Check two elements and swap them if they are in wrong order
c) 12,23,{45,19},8,51 -->Check two elements and swap them if they are in wrong order
d) 12,23,19,{45,8},51 -->Check two elements and swap them if they are in wrong order
e) 12,23,19,8,45,51 
 <--At this step last two elements get sorted-->

 <--Go back to start and begin once more-->
 <--Step 3-->
a) {12,23},19,8,45,51 -->Check two elements and swap them if they are in wrong order
b) 12,{23,19},8,45,51 -->Check two elements and swap them if they are in wrong order
c) 12,19,{23,8},45,51 -->Check two elements and swap them if they are in wrong order
d) 12,19,8,23,45,51 -->Check two elements and swap them if they are in wrong order
 <--At this step last three elements get sorted-->

<--Go back to start and begin once more-->
<--Step 4-->
a) {12,19},8,23,45,51 -->Check two elements and swap them if they are in wrong order
b) 12,{19,8},23,45,51 -->Check two elements and swap them if they are in wrong order
c) 12,8,19,23,45,51 -->Check two elements and swap them if they are in wrong order
 <--At this step last four elements get sorted-->

<--Go back to start and begin once more-->
<--Step 5-->
a) {12,8},19,23,45,51 -->Check two elements and swap them if they are in wrong order
b) 8,12,19,23,45,51   -->Array sorted in ascending order
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
    int n,arr[1000];
    cout<<"Enter the size of array:";
    cin>>n;
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
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}