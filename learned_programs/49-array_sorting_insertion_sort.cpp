/*
Array Sorting: Insertion sort:

logic:
Insert an elemented from an unsorted array to its correct position in sorted array
Given: Unsorted array:12 45 23 51 19 8
Start from the 2nd position
Compare with array before the element (12<45);
12 {45} 23 51 19 8    -->Go Ahead to next element
Compare with array before the element (12<23<45)--> swap(45,23);
12 {23} 45 51 19 8    -->Go Ahead to next element
Compare with array before the element (12<23<45<51);
12 23 45 {51} 19 8    -->Go Ahead to next element
Compare with array before the element (12<19<23<45<51)-->shift all elements a position ahead and insert 19 at its correct position.
12 {19} 23 45 51 8    -->Go Ahead to next element
Compare with array before the element (8<12<19<23<45<51)-->Shift all elements a postion ahead and insert 8 at its original postion
-->You will get a sorted array (ascending);
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
    cout<<"Enter the size of the array:"<<endl;
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
    cout<<endl<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}