/*
Matrix Transpose:

Example
n=5;m=6

1  5  7  9  10 11
6  10 12 13 20 21
9  25 29 30 31 41
15 55 59 63 68 70
40 70 79 81 95 105

Example
n=6;m=5

1 6 9 15 40        
5 10 25 55 70      
7 12 29 59 79      
9 13 30 63 81
10 20 31 68 95
11 21 41 70 105

Example:
n=6 m=6

1  5  7  9  10 11
6  10 12 13 20 21
9  25 29 30 31 41
15 55 59 63 68 70
40 70 79 81 95 105
120 150 180 210 300 370

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
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[j][i]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}