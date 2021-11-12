/*
Spiral Order matrix Transveral"

1 2 3
4 5 6
7 8 9

-->Output:1 2 3 6 9 8 7 4 7 2 5

for a n*m matrix:
We will be needing 4 variables:
1)row start: initially 0;-->rs
2)row end: initially n-1;-->re
3)column start: initially 0;-->cs
4)column end: initially m-1;-->ce

--> going about:
Traverse row rs and increase row start by 1;--> Because we have traversed the starting row.-->(rs-->rs+1)
Traverse column ce and decrease column end by 1; Because we have traversed the ending column.-->(ce-->ce-1)
Traverse row re and decrease row end by 1;--> Because we have traversed the starting row.--->(re-->re-1)
Traverse column cs and increase column end by 1; Because we have traversed the starting column.-->(cs-->cs+1)

perform this drill until rs<=re || cs<=ce

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
    int m, n;
    cin >> n >> m;
    int arr[n][m];
    /*Taking user input --> Run time initialization */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    /*Printing output*/
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<endl<<endl;

    /*Spiral Order printing logic*/
    int rs=0,cs=0, re=n-1,ce=m-1;

    while((rs<=re)&&(cs<=ce))
    {
        /*For row start:*/
        for(int i=cs;i<=ce;i++)
        {
            cout<<arr[rs][i]<<" ";
        }
        rs++;
        /*For column end:*/
        for(int i=rs;i<=re;i++)
        {
            cout<<arr[i][ce]<<" ";
        }
        ce--;
        /*For row end :*/
        for(int i=ce;i>=cs;i--)
        {
            cout<<arr[re][i]<<" ";
        }
        re--;
        /*For column start:*/
        for(int i=re;i>=rs;i--)
        {
            cout<<arr[i][cs]<<" ";
        }
        cs++;   
    }   
    return 0;
}