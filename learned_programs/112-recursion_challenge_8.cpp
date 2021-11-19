/*
Move all elements to the end of the string
input:"axxbdxcefxhix"
output:"abdcefhixxxxx"
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

string moveX(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=moveX(s.substr(1));
    if(ch=='x')
    {
        return ans+ch;
    }
    return ch+ans;
}

int main()
{
    cout<<moveX("axxbdxcefxhix");
    return 0;
}