/*
Problem:
Maximum of 4 numbers using functions
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int max_of_four(int a, int b, int c, int d);

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max_of_four( a,b,c,d);
    return 0;
}

int max_of_four(int a, int b, int c, int d)
{
    return max(max(a,b),max(c,d));
}