/*
Matrix Multplication

Example:

Matrix A:
n=2,m=3;
1   2   3
4   5   6

Matrix B:
m=3,p=1;
1
2
3

Matrix mul
r=2,c=1;
14  
32

Example:

Matrix A:
n=2,m=2;
1   2   
3   4   

Matrix B:
m=2,p=2;
1   0
0   1

Matrix mul
r=2,c=1;
1   2   
3   4

-->Very important concept in Matrix exponentiation.

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
    int n, m, p;
    cout << "Enter rows and column of first matrix:" << endl;
    cin >> n >> m;
    int a[n][m];
    cout << "Enter the elements of first matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<<endl;

    cout << "Enter the column of the second matrix:" << endl;
    cin >> p;
    cout << "Enter the elements of the second matrix:" << endl;
    int b[m][p],mul[n][p];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> b[i][j];
        }
    }

    /*Multiplication logic*/
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            int sum=0;
            for(int k=0;k<m;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            mul[i][j]=sum;
        }
    }
    /*Printing Multiplication:*/
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}