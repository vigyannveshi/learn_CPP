/*
Form substring from string with  ASCII code
input:"AB"
output:
""
"B"
"66"
"A"
"AB"
"66A"
"65"
"B65"
"6665"
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

void subseq(string s,string ans)
{
    if(s.length()==0)
    {
       cout<<ans<<endl;
       return;
    }
    char ch=s[0];
    int ascii=ch;
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,to_string(ascii)+ans);
}

int main()
{
    subseq("AB","");
    return 0;
}