/*
Printing natural numbers upto n both in increasing and decreasing order

-->This is an example of using recursion with a function having a return type as void.

For Decreasing
consider n=4
4-->decreasing(3);
3-->decreasing(2);
2-->decreasing(1);
1
For Increasing
consider n=4
increasing(3)-->increasing(2)-->increasing(1)
1   2   3   4
here first the function is called then the content is printed.
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

void increasing(int n);
void decreasing(int n);
int main()
{
    int n;
    cout << "Enter the nth natural number:" << endl;
    cin >> n;
    decreasing(n);
    cout<<endl;
    increasing(n);
    return 0;
}

void decreasing(int n)
{
    if (n == 1)
    {
        cout << "1 " ;
        return;
    }
    cout << n << " ";
    decreasing(n - 1);
}

void increasing(int n)
{
    if (n == 1)
    {
        cout << "1 ";
        return;
    }
    increasing(n - 1);
    cout << n << " ";
}