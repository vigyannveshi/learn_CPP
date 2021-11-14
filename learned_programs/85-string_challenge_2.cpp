/*
Forming the biggest number, from the numeric string
    
    logic:
    sort the number in the decreasing order and print the number
    
    example:
    3141529841635684866415;

    Note:
    sort(string_1.begin(),string_1.end,greater<data_type>)
        --> will sort in descending order as per the given data type.
    sort(string_1.begin(),string_1.end,lesser<data_type>)
        --> will sort in ascending order as per the given data type.
        
        -->same logic can be applied if asked to form a maximum number from a given set of numbers
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
    string num;
    cout << "Enter a number:" << endl;
    getline(cin, num);
    sort(num.begin(), num.end(),greater<int>());
    cout<<"The max possible number using the given integers would be:"<<num<<endl;
    sort(num.begin(), num.end());
    cout<<"The min possible number using the given integers would be:"<<num<<endl;
        return 0;
}
