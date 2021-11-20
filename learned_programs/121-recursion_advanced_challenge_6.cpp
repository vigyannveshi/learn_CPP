/*
0-1  Knapsack problem:
Put n items with given weight and value in a knapsack of capacity W to get the maximum total value in the knapsack.

Example:

    i                 0               1               2
    wt[i]             10              20              30
    value[i]          100             50              150  
    W=50-->capacity
    include: 0,2;
    value:250;
    wt=40;
There can be two possible cases
1) Either I include the ith item.
2) I don't include the ith item. 
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int knapsack(int value[], int wt[], int n,int W )
{
    if(n==0||W==0)
    {
        return 0;
    }
    int v1,v2;
    /*If weight of nth element is greater than capacity of knapsack, return 0*/
    if(wt[n-1]>W)
    {
        return knapsack(value,wt,n-1,W);
    }
    /*Item included*/
    v1=knapsack(value,wt,n-1,W-wt[n-1])+value[n-1];
    /*Item not included*/
    v2=knapsack(value,wt,n-1,W);
    /*We need maximum value*/
    return max(v1,v2);
}

int main()
{
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int W=50;
    int n=3;
    cout<<knapsack(value,wt,n,W);
    return 0;
}
