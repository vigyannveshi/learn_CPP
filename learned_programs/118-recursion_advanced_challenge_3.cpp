/*
count the number of paths possible through a n*n matrix;
In the given maze you can only move one step at a time either infront or downward, but not in diagonals.
for n*n matrix, starting point would be (0,0) and ending point would be (1,1);
if we are moving forward--> i+1;
if we are moving backward--> j+1;
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int countPath(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }
    return countPath(n,i+1,j)+countPath(n,i,j+1);
}

int main()
{
    cout<<countPath(10,0,0);
    return 0;
}