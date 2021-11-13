/*
Pointers and Arrays:
int arr[]={5,89,4,-9},*aptr;
now create a pointer and point out at first element of the array;
-->can be done in two ways
    1) aptr=&arr[0];
    or
    2)aptr=arr;
both will initialise the pointer with address of element with index 0 in the arr, we can traverse through the array via pointer arithmetic.

Note:
This is true with the exception of character arrays, incase of character arrays, all characters before first space are been printed.

cout<<arr;-->gives the address of element at index 0 in the array
--> cout<<*arr;-->gives the element at index 0 in the array -->use of deferencing operator.

    Printing an array using pointer:
    for(int i=0;i<5;i++)
    {
        Note: Actually both will give same output
        1)cout<<*(aptr+i)<<" ";-->using pointer
        or
        2)cout<<aptr[i]<<" ";--> using pointer array
        or
        3)cout<<*aptr<<" ";--> similar to 1 but with separate increment.
          aptr++;
        or(not allowed needs modification)
        4)cout<<*arr<<" ";
          arr++;-->Illegal i.e; not allowed.
        or(with modication)
         cout<<*(arr+i)<<" ";
    }
    
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
    int arr[]={10,20,30,40,50},*aptr;
    aptr=arr;
    // cout<<*arr<<endl; /*Actually gives the address of element at index 0 in the array*/

    /*Printing an array using pointer:*/
    for(int i=0;i<5;i++)
    {
        // cout<<*(aptr+i)<<" ";
        /*OR*/
        // cout<<*aptr<<" ";
        // aptr++;
        /*OR*/
        // cout<<aptr[i]<<" ";
        /*OR--> not allowed need modification*/
        // cout<<*arr<<" ";
        // arr++;-->Illegal i.e; not allowed.
        /*OR*/
        cout<<*(arr+i)<<" ";
    }
    
    return 0;
}