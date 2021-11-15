/*
Write a program to generate all the possible subsets of a set A = {a,b,c}

Soln:{},{c},{b},{b,c},{a},{a,c},{a,b},{a,b,c}--> 2^n possible subsets where n is the number of elements in the set A

logic:
suppose we represent each occuring character in subset as 1, and no occurring character as 0. now for n objects I can use n bits to denote all possible subsets
Example:
{}                  000     0          
{c}                 001     1
{b}                 010     2
{b,c}               011     3
{a}                 100     4
{a,c}               101     5
{a,b}               110     6
{a,b,c}             111     7
 
actually we will be traversing from 0 to (2^n)-1 and where we get a set bit we will be printing that corresponding character.

Note: 1<<n -->2^n

*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

void subsets(int arr[], int n)
{
    for(int i=0;i<(1<<n);i++)
    {   cout<<"{";
         for(int j=0;j<n;j++)
         {
             if(i&(1<<j))
             {
                 cout<<" "<<arr[j]<<" ";
             }
         }
             cout<<"} "<<endl;    
    }
}
int main()
{
    int arr[4]={1,-1,3,4};
    subsets(arr,4);

    return 0;
}

