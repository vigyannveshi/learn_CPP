/*Sum of first n - natural numbers*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int summation(int n);

int main()
{
    int n;
    cout<<"Enter the nth term:";
    cin>>n;
    cout<<"The sum of first "<<n<<" natural numbers is :"<<summation(n);
    return 0;
}

int summation(int n)
{
    return (n*(n+1))/2;
}