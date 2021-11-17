/*  
    Recursion:
    When a function calls itself to make the problem smaller.

    Example: Find sum of first n whole numbers.
    sum till n = n+(n-1)+(n-2)+(n-3)+....+1
    sum till n = n+(sum till n-1)
    sum till n-1 = n-1+(sum till n-2)
    .
    .
    .
    sum till 2 = 2 + (sum till 1)
    sum till 1 = 1 + (sum till 0)
    sum till 0 = 0 --> Base condition
    
*/


// #include "bits/stdc++.h" --> Will avoid usage ahead, would prefer dynamnic allocation of array in place of the library, because although the program functions giving desired output, still there is underlined error shown by vscode. May use it incase needed ahead.

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int sum(int n);

int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum(n-1);
}





