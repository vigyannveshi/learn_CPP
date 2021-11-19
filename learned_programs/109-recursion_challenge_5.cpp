/*
Replace pi in the string with 3.14 using recursion
example:
input-->"pippxxppiixipi"
output-->"3.14ppxxp3.14ixi3.14"

logic:
check if ith and (i+1) element is pi, if yes extend the rest using recursion
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

void replacepi(string s)
{
    /*base condition*/
    if(s.length()==0)
    {
        return;
    }
    if(s[0]=='p'&&s[1]=='i')
    {
        cout<<"3.14";
        string ros=s.substr(2);
        replacepi(ros);
    }
    else
    {
        cout<<s[0];
        replacepi(s.substr(1));
    }
}
int main()
{
    replacepi("pippxxppiixipi");

    return 0;
}
