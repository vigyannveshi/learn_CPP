/*
Print all the permutations of the string using recursion
"ABC"
"ACB"
"BCA"
"BAC"
"CAB"
"CBA"

Logic:
                                    ABC

                BC,A                AC,B                AB,C

            CAB     BAC         ABC     CBA        ACB         BCA
             
Fix one character and find permutations for the rest of them
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

void permutations(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        /* 
        s.substr(0,i)-->considers all chars before ith char
        s.substr(i+1)-->considers all chars after ith char
        */
       permutations(ros,ans+ch); 
    }

}
int main()
{
    permutations("ABC","");
    return 0;
}