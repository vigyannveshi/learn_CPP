/*
nth fibonacci number
0 1 1 2 3 5 8 13 .......
logic:
fib(n)=fib(n-1)+fib(n-2);
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int fib(int n);

int main()
{
    int n;
    cout<<"Enter the term to find fibonacci number corresponding to it:"<<endl;
    cin>>n;
    cout<<"The fibonacci number coressponding to term: "<<n<<" is: "<<fib(n-1);
    /*Use this to print a series of fibonacci numbers upto nth term*/
    // for(int i=0;i<n;i++)
    // {
    //     cout<<fib(i)<<" ";
    // }
    return 0;
}

int fib(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    return (fib(n-1)+fib(n-2));
}