/*
Here one of the disadvantages is that the code is only applicable for single digit operands
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
using namespace std;

int precedence(char c)
{
    if(c=='^')
    {
        return 3;
    }
    if(c=='*'||c=='/')
    {
        return 2;
    }
    if(c=='+'||c=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string infixToPostfix(string s)
{
    stack<char> st;
    string res;

    for(int i=0;i<s.length();i++)
    {
        if((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
        {
            res+=s[i];
        }
        else if (s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            while(!st.empty()&&st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
            if(!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while(!st.empty()&& precedence(s[i])<precedence(st.top()))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}
int main()
{
    string s1="(a-b/c)*(a/k-l)";
    cout<<infixToPostfix(s1)<<endl;
    string s2="(9-8/4)*(9/3-1)";
    cout<<infixToPostfix(s2)<<endl;
    return 0;
}