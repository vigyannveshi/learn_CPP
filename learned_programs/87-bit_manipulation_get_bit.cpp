/*
Concept:
1)get bit:
    n=0101
    Problem:
    We need to get a bit at position,i=2 considering indexing begans with 1.
    Solution:
    1)first form a number wherein there exist one at that position wherein we need
    to find bit--> m=binary(i)=10
    2)left shift m by 1 i.e; 1<<m -->0100 
    3)if((n&(1<<i))!=0)--> The bit is 1;{0101&0100-->0100!=0}
    else it is 0. 

    Example:
    n=7=0111;
    i=3=011;
    1<<i=0110;
    0111&&0110-->0110!=0--> bit is 1 at index 3

    n=(10)decimal=1010
    i=3;
    1<<i=0110;
    1010&0110

*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;


int getBit(int n,int pos);

int main()
{
    int n,p;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    cout<<"Enter the position to get bit, considering indexing begins from 1:"<<endl;
    cin>>p;
    cout<<getBit(n,p-1);
    return 0;
}

int getBit(int n,int pos)
{
    return ((n&(1<<pos))!=0);
}