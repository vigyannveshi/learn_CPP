/*
Find the first and last occurence of the number in an array,
considering array is strictly increasing( ascending )
Example:{4,2,1,2,5,2,7}

logic in recursion building from:
 first to last --> first apply output and then call for recursion
 last to first --> first apply recursion and then call for output

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int firstOcc(int arr[], int n, int i, int key);
int lastOcc(int arr[], int n, int i, int key);


int main()
{
    int arr[]={4,2,1,2,5,2,7};
    cout<<firstOcc(arr,7,0,2)<<endl;
    cout<<lastOcc(arr,7,0,2);

    return 0;
}
/*First occurence--> start from first element and go upto last*/
int firstOcc(int arr[], int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return (firstOcc(arr,n,i+1,key));
}

/*Last occurence--> here also we will be starting from the first only*/
/*Note: This could be efficient if we had to start from last, still we can have a case wherein both first and last occurence occur at same element with index=1*/

int lastOcc(int arr[], int n, int i, int key)
{
    if(i==n)
    {
        return -1;
    }
    
    int restArr=lastOcc(arr, n,i+1,key);
    if(restArr!=-1)
    {
        return restArr;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
















