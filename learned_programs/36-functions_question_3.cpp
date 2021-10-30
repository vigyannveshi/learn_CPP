/*Factorial using functions:*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int fact(int n);
int main()
{
    int n;
    cout<<"Enter number to find its factorial:";
    cin>>n;
    cout<<n<<" ! = "<<fact(n);    
    return 0;
}
int fact(int n)
{
    int fact=1;
    if(n==0)
    {
        fact=1;
    }
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}