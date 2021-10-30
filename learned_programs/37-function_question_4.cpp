/*Calculate nCr using functions:*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int fact(int n);
int main()
{
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    cout<<n<<"C"<<r<<"="<<fact(n)/(fact(r)*fact(n-r));    
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

