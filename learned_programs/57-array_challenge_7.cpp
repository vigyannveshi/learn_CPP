/*
Smallest positve missing number:(accolite,amazon,samsung,snapdeal)
Problem:
You are given an array arr[] of N integers including 0. The task is to find smallest possible missing number from the array. 

Constraints:
1<=N<=10^6
-10^6<=Ai<=10^6

Example:
0 -9 1 3 -4 5
Here first positive missing number is 2

Base Idea:
--> Build a boolean check[] array  that will depict if any element x is present in the array or not.
F F F F F F

-->Iterate over the array and mark non-negative a[i] as true.
Given array:
0 -9 1 3 -4 5 
i=0
T F F F F F 
i=1
T F F F F F 
i=2
T T F F F F 
i=3
T T F T F F 
i=4
T T F T F F 
i=5
T T F T F T
--> Thus the smallest possible missing postive number = smallest value of i such that a[i]= False.
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
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    const int N=1e6+2;
    static bool a[N];
    for(int i=0;i<N;i++)
    {
        a[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)//we need smallest positive number, 0 is niether positive nor negative
        {
            a[arr[i]]=true;
        }
    }
    int j=1;
    while(j<N)
    {
        if(a[j]==false)
        {
            break;
        }
        j++;
    }
    cout<<j<<endl;
    return 0;
}