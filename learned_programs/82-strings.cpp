/*
Strings:
-->No need to know size of array before hand.
-->Performing operations like concatination and append is easier.
-->Terminated with a special character '\0'

Char Arrays:
--> Need to know size before hand.
--> Larger size needed for operations (concatenate or append)
--> No terminating extra character

Note: cout function can display strings considering spaces involved but cin function ends taking up string as soon as space is detected.
      To get string along with spaces as input we use: 
      getline(cin,string_name) function.


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
    /*Ways to declare a string*/
    string str;
    string str1(5,'a');
    string str2="Jai Shree Ram";
    // cin>>str;-->/*doesn't take care of spaces*/
    getline(cin,str);/*takes care of spaces*/

    cout<<str<<endl<<str1<<endl<<str2; 
    return 0;
}
