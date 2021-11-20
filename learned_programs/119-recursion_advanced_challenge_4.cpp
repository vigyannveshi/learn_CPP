/*

Tiling Problem:
Given a 2*n board and tiles of the size 2*1, find the number of ways to tile the given board using this tiles. 
You can either place it vertically or horizontally.
If you place it vertically, problem reduces to n-1 cases
If you place it horizontally, problem reduces to n-2 cases
base case:
if only one column remains return 1
if no column remains or if n=0, return 0;

We need to find all possible ways of tiling.

The ways of tilings actually follows the fibonacci series:
0 1 1 2 3 5
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int tilingWays(int n)
{
    if((n)==1)
    {
        return 1;
    }
    if((n)==0)
    {
        return 0;
    }

    return (tilingWays(n-1)+tilingWays(n-2));
}
int main()
{
    int n;
    cout<<"Enter the number of columns:"<<endl;
    cin>>n;
    cout<<tilingWays(n  );
    return 0;
}