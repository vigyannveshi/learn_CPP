/*
char_arrays--> compile time initialization
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
    char arr[100]="Apple";
    int i=0;
    while(arr[i]!='\0')
    {
        cout<<arr[i];
        i++;
    }
    return 0;
}