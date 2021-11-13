/*
Pointer to pointer:
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
    int a=10,*p=&a,**pp=&p;
    cout<<"printing the value of a:"<<endl;
    cout<<a<<" "<<*p<<" "<<**pp<<endl;
    cout<<"printing the value of &a:"<<endl;
    cout<<&a<<" "<<p<<" "<<*pp<<endl;
    cout<<"printing the value of &p:"<<endl;
    cout<<&p<<" "<<pp<<endl;
    return 0;
}