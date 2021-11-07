/*
First Repeating Element--> Seen in amazon and oracle
Problem:
Given an array arr[] of size N. The task is to find the first repeating element inn the array of integers, i.e., an element that occurs more than once and whose index of first occurence is smallest.

Constraints:
1<=N<=10^6;
0<=Ai<=10^6;

Input:
7
1 5 3 4 3 5 6
Output:
2

Explainatin:
5 is appearing twice and its first appearance is at index 2 which is less than 3 whose first occuring index is 3.

Base Idea:
To check if a element is repeating, we maintain an array idx[],which stores the first occurence(index) of a particular element a[i].
-->Initialize the idx[] with -1, and minidx with INT_MAX.
idx={-1,-1,-1,-1,-1,-1}
keep updating idx[], while traveling the given array.

Given Array:

1   5   3   4   3   5   6

*/
#include "bits/stdc++.h";//This library may show problems but it allows one us initialize array using value of variable declared during runtime

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
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }    

    const int N=1e6+2;//1*10^6+2=1000002;
    static int idx[N];//Needed because my compiler wasn't able to compile with only int.
    for(int i=0;i<N;i++)
    {
        idx[i]=-1;
    }
    int minidx=INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(idx[arr[i]]!=-1)
        {
            minidx=min(minidx,idx[arr[i]]);
        }
        else
        {
            idx[arr[i]]=i;
        }
    }

    if(minidx==INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minidx+1<<endl;//--> gives you the position.
    }
    return 0;
}


