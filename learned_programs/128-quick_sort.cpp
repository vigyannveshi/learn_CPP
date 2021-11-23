/*
Another sorting  technique based on divide and conquer algorithm:

QuickSort(arr[],l,r)
{
    if(l<r)
    {
        int pi=partition(arr[],l,r);--> pointer of the pivot element
        -->Pivot element is the element that gets placed to correct position every time we apply quick sort
        QuickSort(arr[],l,pi-1);
        QuickSort(arr[],pi+1,r);

    }
}

consider array:{6,3,9,5,2,8,7} here arr[r]=7
let pivot element be 7, hence array will be partitioned around 7;
A-->{6,3,5,2}   7   {8,9}<--B
A--> will be pivoted around 2;
{}    2   {6,3,5}<--C
C--> will be pivoted around 5
{3} 5 {6}--> no more possibility as (l=r)
B--> will be pivoted around 9
{8}   9    {}

--> Finally the array will become {3,5,6,7,8,9}

#working of partition:
Partition(arr[],l,r)
{
    pivot =arr[r];       // that is equal to 7
    i=l-1;
    for(j=l;;j<r-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(i,j);--> swap element at this position
        }
    }
    swap(i+1,r)--> swap element at this position
    return i+1;
}

--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--**--
Time complexity of the quick sort algorithm:
--> Depends on pivot.
1) best case, pivot would be median element.
2) worst case, pivot would be an end element.

for best case:
Recurence:
Recurence Relation: T(n)=2T(n/2)+n

levels:
n/2^k=1;
n=2^k;
k=logn--> base=2;

-->T(n)=2T(n/2)+n;
-->T(n/2)=2T(n/4)+n/2;
-->T(n/4)=2T(n/4)+n/8;
-->.
-->.
-->.
-->T(1)=1

for all above arrowed equations multiply with powers of 2 starting from 2^0....(2^logn=n)
and then add this equations;
T(n)=n+n+n+n......upto log(n); 
--------------------------------------------------------------------

for the worst case:
T(n)=T(n-1)+n;

In this case,
Time complexity would be O(n^2).


******Time Complexity for best case of quick sort*****
T(n)=nlog(n);
******Time Complexity for worst case of quick sort*****
T(n)=n^2;
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp; 
}

int partition(int arr[],int l, int r)
{
    int pivot=arr[r];
    int i=l-1;//initiliazing index i before first element
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}
void quickSort(int arr[], int l,int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }

}

int main()
{
    int arr[]={6,3,9,5,2,8,4,7,1};
    quickSort(arr,0,8);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}