/*
Converting entire string to either upper or lowercase with and without inbuilt functions

-->transform(string.begin(),string.end(),starting_index_for_transformation,::toupper);
    -->converts string to upper case
-->transform(string.begin(),string.end(),starting_index_for_transformation,::tolower);
    -->converts string to lower case

Keypoints:
'a'-'A'=32
logic for lower case to upper case
--> just shift all lower case variables by 32

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
    string str = "The quick brown Fox jumped over the lazy dog", stru = "THE QuICK BROWN fOX JUmPED OVEr THE LAZY dOG";


    /*logic for lower case to upper case*/
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         str[i] -= 32;
    //     }
    // }


    // cout << str << endl;


    /*Logic for upper case to lower case*/
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         str[i] += 32;
    //     }
    // }


    //  cout << str << endl;

    /*Using predefined functions*/
    transform(stru.begin(),stru.end(),stru.begin(),::tolower);
    cout<<stru<<endl;
    transform(stru.begin(),stru.end(),stru.begin(),::toupper);
    cout<<stru<<endl;
    return 0;
}
