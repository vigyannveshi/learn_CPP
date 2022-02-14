/*
    Given a valid mathematical expression, findout whether it has redundant parenthesis or not. It contains the following operators: '+', '-', '/', '*'.

    A=((a+b))--> 1
    A=(a+(a+b))-->0
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
using namespace std;

bool redundant_parenthesis(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(st.top()=='(')
            {
                return true;
            }
            while(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/')
            {
                st.pop();
            }
            st.pop();

        }
    }
    return false;
}

int main()
{
    string s1="((a+b))",s2="(a+(a+b))";
    cout<<redundant_parenthesis(s1)<<endl;
    cout<<redundant_parenthesis(s2);
    return 0;
}