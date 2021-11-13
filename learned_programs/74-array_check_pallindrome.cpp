/*
Check pallindromes:
Example:


pallindrome:
nitin<-->nitin
racecar<-->racecar


not pallindrome:
goat<-->taog
man<-->nam

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
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check=true;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            check=false;
            break;
        }
    }
    (check)?cout<<"Entered word is a pallindrome":cout<<"Entered word is not a pallindrome";
    return 0;
}