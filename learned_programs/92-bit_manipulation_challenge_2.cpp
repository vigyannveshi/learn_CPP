/*
Write a program to count the number of ones in binary representation of a number

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
    int n,i=0;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    
    while(n>0)
    {
        i++;
        n=n&(n-1);
    }
    cout<<"The number of ones in number entered is:"<<i<<endl;
    return 0;
}






