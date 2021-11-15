/*
Write a program to check if a given number is divisible  by 2.
logic building:
n=6 (0110)
n-1=5 (0101)
we can write n-1 easily considering  the rightmost set bit and previous bits and flipping them, in 6 rightmost set bit is at position 1 considering indexing begins at 0, so now flip the bit at index 1 and previous indices i.e; 0 for 6 inorder to get 5.

now if we take (n&(n-1));  it will have the same bits as n, except the first rightmost set bit.
ex:0110&0101-->0100
ex:1000&0111-->0000

Now, whats this to do with our problem;
If you have noted , in the powers of 2, there is only one set bit.
eg: 2-->10 
eg: 4-->100 
eg: 8-->1000 
eg: 16-->10000

# property:now if 'p' is a power of 2, then p&(p-1)=0
*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    (!(n&(n-1)))?cout<<"The entered number is a power of 2":cout<<"The entered number is not a power of 2";
    return 0;
}