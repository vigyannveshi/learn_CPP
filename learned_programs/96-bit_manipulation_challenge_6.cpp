/*
Write a program  to find a unique number  in an array where all numbers except one, are present thrice.
Example A[]={1,3,2,3,4,2,1,1,2,3} 
solution:
Create an array with size 64--> B[64];
fill the array at indices such that index corresponding to respective set bit is incremented
--> {0001,0011,0010,0011,0100,0010,0001,0001,0010,0011}
-->B[64]={6,6,4,0,0....};
now find modulo 3 throughout the array,
B[64]={0,0,1,0,0...}
The number which is the reverse of B[64] is the answer;
-->4

We can do it without declaring an extra arra, refer below
*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int setBit(int n, int p)
{
    return (n|(1<<p));
}

bool getBit(int n, int position)
{
    return ((n & (1 << position)) != 0);
}

int unique(int arr[], int n)
{
    int result=0;
    for(int i=0;i<64;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getBit(arr[j],i))
            {
                sum++;
            }
        }
        if(sum%3!=0)
        {
            result=setBit(result,i);
        }
    }
    return result;
}

int main()
{
    int arr[]={1,2,3,98,1,2,3,1,2,3};/*Not necessary to have the given order*/
    cout<<"The unique integer is: "<< unique(arr,10);
    return 0;
}
