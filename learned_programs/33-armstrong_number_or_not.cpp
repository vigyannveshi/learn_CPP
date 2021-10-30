#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n, rem, rev=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        n/=10;
        rev=10*rev+rem;
    }
    cout<<rev;
    return 0;
}