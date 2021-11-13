/*
Pointers:
Pointers are variables that store the addresses of other variables.

int a=10;
int *aptr;
aptr=&a;--> referencing
cout<<&a--> gives the address of a;
cout<<aptr-->gives the address of a;
cout<<*(&a);--> gives the value of a;
cout<<*aptr-->gives the value of a;--> dereferencing

Pointer Arithmetic--> {++,--,+,-,+=,-=}
int a=10,b=20,*aptr=&a,*bptr=&b;
let address of a=2000, b=1000;
aptr++;
cout<<aptr--> 2004-->  {initial address + sizeof(data_type)}
aptr--;
cout<<aptr--> 2000-->  {initial address - sizeof(data_type)}
aptr+=4; or aptr=aptr + 4;  
cout<<aptr--> 2016-->  {initial address + n*sizeof(data_type)} where n is the integer 
aptr-=4; or aptr=aptr - 4;  
cout<<aptr--> 2000-->  {initial address - n*sizeof(data_type)} where n is the integer 


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
    int a=10;
    int *aptr;
    aptr=&a;
    cout<<aptr<<endl;
    *aptr=20;
    cout<<a<<endl;
    return 0;
}