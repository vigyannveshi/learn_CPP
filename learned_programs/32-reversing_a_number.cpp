/*
Checking for Armstrong number:
153--> 1^3+5^3+3^3=1+125+27=153-->Armstrong number
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n, rem, check,m;
    cout<<"Enter a number:";
    cin>>n;
    m=n;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        check+=(pow(rem,3));
    }
    if(m==check)
    {
        cout<<m<<" is an Armstrong number";
    }
    else
    {
        cout<<m<<" is not an Armstrong number";
    }
    return 0;
}