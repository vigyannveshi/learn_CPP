/*
    {[({[()]})]} --> Balanced Parenthesis
    [{()]} --> Unbalanced Parenthesis
    {[({[( --> Unbalanced Parenthesis
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

bool isValid(string s)
{
    int n=s.length();
    stack<char> st;
    bool ans=true;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(!st.empty()&&st.top()=='(')
            {
                st.pop();
            }
            else
            {
                ans=false;
                return ans;
            }
        }
        else if(s[i]==']')
        {
            if(!st.empty()&&st.top()=='[')
            {
                st.pop();
            }
            else
            {
                ans=false;
                return ans;
            }
        }
        else if(s[i]=='}')
        {
            if(!st.empty()&&st.top()=='{')
            {
                st.pop();
            }
            else
            {
                ans=false;
                return ans;
            }
        }
    }
    if(!st.empty())
    {
        ans=false;
    }
    return ans;
}

void checkValidity(string s)
{
    if(isValid(s))
    {
        cout<<"Valid string"<<endl;
    }
    else
    {
        cout<<"Invalid string"<<endl;
    }
}
int main()
{
    string s1="{[({[()]})]}";
    string s2="[{()]}";
    string s3="{[({[()]})]}(){";
    checkValidity(s1);
    checkValidity(s2);
    checkValidity(s3);
    return 0;
}