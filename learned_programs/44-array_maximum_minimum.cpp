/*Maximum and minimum element in array*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int arr[1000],n;
    cout<<"Enter the number of elements in the array:";
    cin>>n;
    cout<<"Enter the elements:"<<endl;

    /*INT_MIN and INT_MAX requires a header file called climits*/

    int maxNo=INT_MIN;//INT_MIN is the minimum possible value of integer in CPP
    int minNo=INT_MAX;//INT_MAX is the maximum possible value of integer in CPP


    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        // if(maxNo<arr[i])
        // {
        //     maxNo=arr[i];
        // }
        // if(minNo>arr[i]No)
        // {
        //     minNo=arr[i];
        // }

        /*better alternative*/
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }
    cout<<"The array entered is:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"The maximum value element is: "<<maxNo<<" and the minimum value element is: "<<minNo<<endl;
    return 0;
}