/*Display pascal's triangle using functions:*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int C(int i, int j);
int fact(int n);
int main()
{
    int n;
    cout<<"Enter number of rows in pascal's triangle:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=n-i;j>0;j--)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<C(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int C(int i, int j)
{
    return (fact(i)/(fact(j)*fact(i-j)));
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