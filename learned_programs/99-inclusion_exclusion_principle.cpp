/*
Inclusion-Exclusion Principle:
Suppose there is a class of engineers, and they have options to choose their subjects. so x of them choose subject 1, y choose subject 2, but there are some extraordinary people who choose both the subjects. Now if we need to find the number of engineers(n), interms of x,y,z; 
(n=x+y-z)-->Inclusion-Exclusion Principle

Problem:
How many numbers between 1 and 1000 are divisible by 5 or 7;
*/

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int div_a=0,div_b=0,div_a_b=0,a,b,n;
    cout<<"Enter the nth term"<<endl;
    cin>>n;
    cout<<"Enter the two numbers to check divisbility:"<<endl;
    cin>>a>>b;
    for(int i=1;i<=n;i++)
    {
        if(i%a==0)
        {
            div_a++;
        }
        if(i%b==0)
        {
            div_b++;
        }
        if(i%b==0&&i%a==0)
        {
            div_a_b++;
        }
    }
    cout<<"Numbers divisible by "<<a<< " or " <<b<<" are: "<<(div_a+div_b)-div_a_b;

    return 0;
}