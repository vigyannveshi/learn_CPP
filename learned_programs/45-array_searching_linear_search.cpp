/*
Searching an element in a array using linear search
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
    int arr[1000],n,val,j;
    bool flag=0;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value of element to find its index:"<<endl;
    cin>>val;
    for(j=0;j<n;j++)
    {
        if(arr[j]==val)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"The element "<<val<<" is located at index:"<<j<<endl;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}