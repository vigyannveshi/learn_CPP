/*Functions using pointers--> pass by reference */

#include "bits/stdc++.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

void increment(int *p);
int main()
{
    int a=20,*p=&a;
    cout<<a<<endl;
    increment(p);
    /*OR*/
    // increment(&a);
    cout<<a<<endl;
    return 0;
}

void increment(int *p)
{
    (*p)++;
}