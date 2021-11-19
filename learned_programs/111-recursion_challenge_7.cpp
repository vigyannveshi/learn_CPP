/*
Removing duplicates from string using recursion:
"aaaabbbeeecdddd"-->"abecd"
leaving the first character check the rest of the string using recursion.
compare the char left earlier with the rest string, and if it is not repeated store it in answer, else return the remain string.
*/



#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

string removeDuplicates(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=removeDuplicates(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);
}
int main()
{
    cout<<removeDuplicates("aaaabbbeeecdddd");
    return 0;
}