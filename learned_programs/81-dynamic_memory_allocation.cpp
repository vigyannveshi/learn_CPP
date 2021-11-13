/*
Dynamic Memory Allocation
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
    int *p = new int();
    *p=10;
    cout<<*p<<endl;
    delete(p);
    cout<<*p<<endl;/*since the value is deleted, hence we will get some garbage value as the answer*/
    p=new int[4];/*will create an integer type array with 4 elements*/
    for(int i=0;i<4;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<4;i++)
    {
        cout<<*(p+i);
    }
    cout<<endl;
    delete[]p;/*will delete the block of memory allocated for the array.*/
    p=NULL;/*removes the pointer from stack*/
    cout<<p<<endl;
    return 0;
}