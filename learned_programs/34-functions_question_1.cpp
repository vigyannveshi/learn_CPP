/*Prime numbers between two numbers using Functions*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int checkPrime(int m);
int main()
{
    int m,n;
    cout<<"Enter first number:";
    cin>>m;
    cout<<"Enter second number:";
    cin>>n;
    for(int i=m;i<=n;i++)
    {
    if(checkPrime(i))
    {
        cout<<i<<" ";
    }
    }
    return 0;
}
int checkPrime(int m)
{
        bool flag=1;
        if(m==1)
        {
            flag=0;
        }
        for(int j=2;j<sqrt(m);j++)
        {
            if(m%j==0)
            {
                flag=0;
                break;
            }
        }
    return flag;
}