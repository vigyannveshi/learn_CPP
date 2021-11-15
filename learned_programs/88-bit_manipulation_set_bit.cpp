/*
2)Set bit:
-->n=0101;
-->suppose we need to set bit at position i=1;
-->1<<i-->0010;-->1*2^i;
0101|0010=0111;
*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int setBit(int n, int p);

int main()
{
    int n, p;
    cout << "Enter the number:" << endl;
    cin >> n;
    cout << "Enter the position to set bit, considering indexing begins from 1:" << endl;
    cin >> p;
    cout<<setBit(n,p-1);
    return 0;
}

int setBit(int n, int p)
{
    return (n|(1<<p));
}