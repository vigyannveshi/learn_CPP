/*Fibnacci series using functions*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

void fib(int n);
int main()
{
    int n;
    cout<<"Enter n for first n fibonacci series:";
    cin>>n;
    fib(n);
    return 0;
}

void fib(int n)
{
    int a=0,b=1,c;
    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
}
