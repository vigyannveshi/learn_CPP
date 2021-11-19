/*
Reverse a string using recursion
    "binod"
     "inod"
      "nod"
       "od"
        "d"
        ""
        return and print:
        "d"
        "do"
        "don"
        "doni"
        "donib"

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

void reverse(string s)
{
    /*base case*/
    if(s.length()==0)
    {
        return;
    }
    /*ros is actually rest of the string, we use s.substr(1) inorder to get string starting from index 1 */
    string ros = s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main()
{
    reverse("binod");
    return 0;
}