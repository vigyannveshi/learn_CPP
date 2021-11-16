/*
Write a program to find two unique numbers in an array where except two, all other numbers occur twice.
Example:a[]={2,4,6,7,4,5,6,2};
here the two unique numbers would be 7,5-->
xorsum=0111^0101=0010;
        0111^xorSum=0111^0010=0101
-->on getting the xorSum, we actually check the positioning of the rightmost set bit.
-->once we get the position of right most set bit we check numbers in array which have the rightmost setbit at that position, after which xor them again, at the end of the xor we will get one of the number.
How do we find first right setbit in xorSum:
xorSum=0010
-->     while(setBit!=1)
    {
        setbit=xorSum&1;[-->(1)0-->(2)1]
        position++;[-->(1)positon=1-->(2)positon=2--> position is one extra as indexing begins at 0]
        xorSum=xorSum>>1;[-->(1)xorSum=0001-->(2)xorSum=0000-->loop exited]
    }

-->now we use this number and xor it with the xorSum initially obtained,we will get the second number

*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int getBit(int n, int position)
{
    return ((n & (1 << position)) != 0);
}

void unique(int arr[], int n)
{
    int xorSum = 0;
    for (int i = 0; i < n; i++)
    {
        xorSum = (xorSum ^ arr[i]);
    }
    int setBit = 0, position = 0, tempXor = xorSum;
    while (setBit != 1)
    {
        setBit = xorSum & 1;
        position++;
        xorSum = xorSum >> 1;
    }
    int newXor = 0;
    for (int i = 0; i < n; i++)
    {
        if (getBit(arr[i], (position - 1)))
        {
            newXor = newXor ^ arr[i];
        }
    }
    cout << "The two unique numbers in the array are: " << newXor << " and " << (tempXor ^ newXor) << endl;
}

int main()
{
    int arr[8] = {2, 4, 6, 7, 2, 5, 4, 6};
    unique(arr, 8);

    return 0;
}