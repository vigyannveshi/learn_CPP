/*
Write a program to find a unique number in an array where except one, all other numbers occur twice.
{2,4,6,3,4,6,2}

Solution 
--> done using XOR--> odd one detector
A   B   A^B
0   0    0   
0   1    1
1   0    1    
1   1    0

0^A=A;
A^B=0--> if A=B

Consider: A[]={1,2,3,4,1,2,3}
step1:
xorsum=0;
i=0;
xorsum=0000^0001=0001
step2:
i=1;
xorsum=0001^0010=0011
step3:
i=2;
xorsum=0011^0011=0000
step4:
i=3;
xorsum=0000^0100=0100
step5:
i=4;
xorsum=0100^0001=0101
step6:
i=5;
xorsum=0101^0010=0111
step7:
i=6;
xorsum=0111^0011=0100

--> Return xorsum=0100-->4



*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int unique(int arr[], int n)
{
    int xorSum=0;
    for(int i=0;i<n;i++)
    {
        xorSum  =   xorSum^arr[i];
    }
    return xorSum;
}

int main()
{
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Number which occurs with odd frequency is: "<<unique(arr,n);
    return 0;
}

