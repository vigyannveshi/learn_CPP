/*
Factorial of a number using recursion
logic:
n!=n*(n-1)!;
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int fact(int n);

int main()
{
    int n;
    cout<<"Enter the number to calculate its factorial:"<<endl;
    cin>>n;
    cout<<n<<"! = "<<fact(n);

    return 0;
}

int fact(int n)
{
    if(n==0)
        return 1;
    return n*(fact(n-1));
}