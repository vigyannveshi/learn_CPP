/*
Problem statement:
You have 15 Rupees, 
You can buy 1 chocolate for 1 rupee or  3 wrappers;
find the total number of chocolates that you can buy with the given amount

let r =  Money you have.
    n1=  Chocolates you can buy with r rupees;
    
*/

#include <iostream>

using namespace std;

int main()
{
    int r, n, tn=0;
    cout<<"Enter the amount that you have:";
    cin>>r;
    n=r;
    tn=n;
    while(n>=3)
    {
        int m=n/3;
        tn+=m;
        n=m+(n-(3*m));
    }
    cout<<"The total chocolates that can be bought:"<<tn<<endl;
    return 0;
}