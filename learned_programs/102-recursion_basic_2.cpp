/*
Calculate n raised to power of p
logic:
n^p=n*n^p-1
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int power(int n, int p)
{
    if(p==0)
        return 1;
    return (n*power(n,p-1));
}

int main()
{
    int n,p;
    cout<<"Enter the base and exponent respectively:"<<endl;
    cin>>n>>p;
    cout<<n<<"^"<<p<<"="<<power(n,p);
    return 0;
}