/*
Count sort:
--> It has a better time complexity then merge sort and quick sort

Working:
1)Find the count of every distinct elements in the array
2)Calculate the position of each element in the sorted array

Example:
original array:1 3 2 3 4 1 6 4 3

Create a count array whose size is equal to magnitude of maximum element in the array
count array: 0 2 1 3 2 0 1
             0 1 2 3 4 5 6
count of a particular element is stored in the count array at  index corresponding to value of that element.

we need to know the count of each element along with the count of the element before it.

Modify the count array by adding the count of the previous element to the current element

count array: 0 2 3 6 8 8 9
             0 1 2 3 4 5 6 

here the count array will denote the position of each element in the original array

Now we create an empty array with the size of original array

now we will begin to traverse the original array from the end using a pointer
last element in original array: 3
check the position of 3 in the count array, decrement that value by 1 and store 3 in the new at the index of the decremented value;

original array:1 3 2 3 4 1 6 4 3
count array: 0 2 3 5 8 8 9
             0 1 2 3 4 5 6 
newArr=0 0 0 0 0 3 0 0 0 0;

now move the pointer to second last element of the original array i.e; 4
and follow similar procedure as done previously
original array:1 3 2 3 4 1 6 4 3
count array: 0 2 3 5 7 8 9
             0 1 2 3 4 5 6 
newArr=0 0 0 0 0 3 0 7 0 0;

now we have the pointer at 6;
original array:1 3 2 3 4 1 6 4 3
count array: 0 2 3 5 7 8 8
             0 1 2 3 4 5 6 
newArr=0 0 0 0 0 3 0 4 6 ;

now we have the pointer at 1;
original array:1 3 2 3 4 1 6 4 3
count array: 0 1 3 5 7 8 8
             0 1 2 3 4 5 6 
newArr=0 1 0 0 0 3 0 4 6 ;

now we have the pointer at 4;
original array:1 3 2 3 4 1 6 4 3
count array: 0 1 3 5 6 8 8
             0 1 2 3 4 5 6 
newArr=0 1 0 0 0 3 4 4 6 ;

now we have the pointer at 3;
original array:1 3 2 3 4 1 6 4 3
count array: 0 1 3 4 6 8 8
             0 1 2 3 4 5 6 
newArr=0 1 0 0 3 3 4 4 6 ;

now we have the pointer at 2;
original array:1 3 2 3 4 1 6 4 3
count array: 0 1 2 4 6 8 8
             0 1 2 3 4 5 6 
newArr=0 1 2 0 3 3 4 4 6 ;

now we have the pointer at 3;
original array:1 3 2 3 4 1 6 4 3
count array: 0 1 2 3 6 8 8
             0 1 2 3 4 5 6 
newArr=0 1 2 3 3 3 4 4 6 ;

now we have the pointer at 1;
original array:1 3 2 3 4 1 6 4 3
count array: 0 0 2 3 6 8 8
             0 1 2 3 4 5 6 
newArr=1 1 2 3 3 3 4 4 6 ;--> sorted answer

*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*
Time complexity of counting sort:
1) First we create an array of appropriate range, Time:O(max(Ai))
2) Fill the frequency of each element.Time:O(N)
3)Iterate the frequency array. Time:O(max(Ai))

Time complexity: max(Ai,N);
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void countSort(int arr[], int n)
{
    /*Getting the max element*/
    int k=arr[0];
    for(int i=0;i<n;i++)
    {
        k=max(arr[i],k);
    }
    /*creating a dynamic array to store count*/
    int *count = new int[k]; 
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    /*cummulating the count array in order to get position array*/
    for(int i=0;i<k;i++)
    {
        count[i+1]+=count[i];
    }
    /*creating the new array to store the result*/
    int* newArr= new int[n];
    for(int i=n-1;i>=0;i--)
    {
        newArr[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=newArr[i];
    }
}


int main()
{
    int arr[]={1,3,2,3,4,1,6,4,3},n=(sizeof(arr))/(sizeof(arr[0]));
    countSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}