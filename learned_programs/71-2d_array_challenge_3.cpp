/*
Matrix search such that both rows and columns are sorted

Example:
1   4   7   11
2   5   8   12
3   6   9   16
10  13  14  17

Suppose Given Target is 5-->Return 1
Suppose Given Target is 20-->Return 0

for brute force approach refer:67-element_searching_in_2d_matrix.cpp

Here we are given sorted arr
optimising the code:
--> Start from the top right element:
--> You are at (r,c)
    if(arr[r][c]==target)
    {
        return 1;
    }
    if(arr[r][c]>target)
    {
        c--;
    }
    if(arr[r][c]<target)
    {
        r++;
    }
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
    int m, n,k;
    cout << "Enter the number of rows and columns:" << endl;
    cin >> n >> m;
    int arr[n][m];
    cout <<endl<< "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the element to be found:"<<endl;
    cin >> k;
    cout << endl;
    int r = 0, c = m - 1;
    while (r <=n - 1 || c >= 0)
    {
        if (arr[r][c] == k)
        {
            cout<<"Location indices: ("<<r<<","<<c<<")"<<endl;
            cout<<k<<" exists in the array"<<endl;
            return 0;
        }
        if (arr[r][c] > k)
        {
            c--;
        }
        if (arr[r][c] < k)
        {
            r++;
        }
    }
    cout<<k<<" doesn't exists in the array"<<endl;
    return 0;
}
