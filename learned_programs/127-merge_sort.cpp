/*
Merge Sort
--> Based on divide and conquer alogorithm
--> In the divide and conquer algorithm, we keep on dividing a problem into subproblems recursively, until we get the most smallest problem that we can directly sort.

logic:

MergeSort(arr[],l,r)
{
    if(l<r)
    {
        mid=(l+r)/2;
        MergeSort(arr[],l,mid);//a
        MergeSort(arr[],mid+1,r);//b

        Merge(arr[],l,mid,r);
    }
}

example:
6,3,9,5,2,8,7,1
-->step 1:
    -->step a:
        6,3,9,5;
    -->step a1:
        6,3
    -->step a2:
        6 and 3 --> Merge them will sort {6,3}
        --> 3,6-->one part of the answer
    --> Go back to step a and use step b within
        -->step ab:
            9,5
        -->step ab1:
            9 and 5 --> Merge them will sort {9,5}
        --> 5,9-->second part of the answer
    --> Now merge first and second part of the answer
        --> 3,5,6,9
    The same thing is done to remaining elements at step 1: and finally both the answers will get merged

    How does the Merge function work
    consider the merging of both the answer:
    compares pointed elements and places the minimum of the two
    3,5,6,9 and 1,2,7,8
    |           |
    1

    3,5,6,9 and 1,2,7,8
    |            |
    1,2

    3,5,6,9 and 1,2,7,8
    |               |
    1,2,3

    3,5,6,9 and 1,2,7,8
      |             |
    1,2,3,5

    3,5,6,9 and 1,2,7,8
        |           |
    1,2,3,5,6

    3,5,6,9 and 1,2,7,8
          |         |
    1,2,3,5,6,7

    3,5,6,9 and 1,2,7,8
          |           |
    1,2,3,5,6,7,8,9
--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--
Time Complexity of merge sort:
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

******Time Complexity of merge sort*****
T(n)=nlog(n);


*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    /*Creating temperory arrays:*/
   int *a= new int [n1];
   int *b= new int [n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    /*Merging logic*/

    int i = 0, j = 0, k = l; //-->pointers;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        if (a[i] > b[j])
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[]={6,3,9,5,2,8,4,7,1};
    mergeSort(arr,0,8);
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}