/*
3)Clear bit
n=0101 and i=2-->0010;
1<<i-->0100;
take ones complement of (1<<i)-->1011;--> process is called masking, because we see as to which nos corresponding do I need a 1 or a 0.
n&(~(1<<i))--> 0001
*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int clearBit(int n, int p);

int main()
{
    int n, p;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << "Enter the position to set bit, considering indexing begins from 1:" << endl;
    cin >> p;
    cout<<clearBit(n,p-1);
    return 0;
}

int clearBit(int n, int p)
{
    return (n&(~(1<<p)));
}