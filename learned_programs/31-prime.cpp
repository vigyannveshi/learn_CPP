/*Number is prime or armstrong*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            cout<<"Entered number is not prime";
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"Entered number is prime";

    return 0;
}