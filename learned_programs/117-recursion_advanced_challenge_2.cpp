/*
Count the number of paths possible from the starting point to the ending point in the gameboard
Example:
0   1   2   3  
ways to go: 
0-->1-->2-->3;
0-->1-->3
0-->2-->3
0-->3;
here steps to be taken will depend on the dice used
*/

int countPath(int s, int e, int maxjump)
{
    if(s==e)
    {
        return 1;
    }
    if(s>e)
    {
        return 0;
    }
    int count =0;
    for(int i=1;i<=maxjump;i++)
    {
        count+=countPath(s+i,e,maxjump);
    }
    return count;
}

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    cout<<countPath(0,3,6);
    return 0;
}