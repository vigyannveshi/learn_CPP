/*
-->N-Queen-Problem via backtracking
-->We are given a chess board of n*n, now we need to place n queens, such that no
    two queens attack each other
-->We will be placing queens one in each row, from top to bottom, such that we
    check the column, left and right diagonals before placing the queen.

Sample Input:
n=4;
0 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0

Output:
0 0 1 0
1 0 0 0
0 0 0 1
0 1 0 0
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

bool isSafe(int **arr, int x, int y, int n)
{
    /*Checking for each column*/
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }
    int row = x, col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int **arr, int x, int n)
{
    if (x >= n)
    {
        return true;
    }
    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            arr[x][col] = 1;
            if (nQueen(arr, x + 1, n))
            {
                return true;
            }
            /*Backtracking*/
            arr[x][col] = 0;
        }
    }
        return false;
}

int main()
{
    int n;
    cout << "Enter the size of the board:" << endl;
    cin >> n;
    /*Initizing an dynamic 2-d Array*/
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }
    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}