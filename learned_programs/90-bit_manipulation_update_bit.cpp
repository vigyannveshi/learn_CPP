/*
Update bit:
n=0101;
-->suppose we need to update bit at position, i=1 to 1.
step1: clear the bit at the position that you need to update.
step2: set bit at the position 
In general, update bit is clear+set at a particular position.

-->Note:
    0<<a-->0;
    0>>a-->0;
    a>>0-->a;
    a<<0-->a;
    capacity of left shift is 8, if you shift more than 8 you'll get undesirable values, same is the case with right shift
    a<<b--> a*2^b;
    a>>b--> a/2^b
*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int updateBit(int n, int p, int v);


int main()
{
    int n,p,v;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << "Enter the position to update bit, considering indexing begins from 1:" << endl;
    cin >> p;
    cout<<"Enter the value to be updated:"<<endl;
    cin>>v;
    cout<<updateBit(n,p-1,v);
    return 0;
}

int updateBit(int n, int p, int v)
{
    n=(n&(~(1<<p)));
    return (n|(v<<p));
}
