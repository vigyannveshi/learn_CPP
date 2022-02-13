/*
    Here one of the disadvantages is that the code is only applicable for single digit operands

    46+2/5*7

    Time Complexity: O(l), where l is the length of string given to us.

    Two possible mistakes when you write this code:
    1) While checking for operands '0' and '9', as input is string.
    2) Converting char operator to integer-> s[i]-'0';
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


int postfix_evaluation(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            /*
                Instead of taking first op1 and op2, then swapping, better take op2  first then op1
            */
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            switch (s[i])
            {
                case '+':
                    st.push(op1 + op2);
                    break;
                case '-':
                    st.push(op1 - op2);
                    break;
                case '*':
                    st.push(op1 * op2);
                    break;
                case '/':
                    st.push(op1 / op2);
                    break;
                case '^' :
                    st.push(pow(op1,op2));
                    break;
                default:
                    break;
            }
        }
    }
    return st.top();
}
int main()
{
    string s1="46+2/5*7+";
    string s2="984/-93/1-*";
    cout<<postfix_evaluation(s1)<<endl;
    cout<<postfix_evaluation(s2)<<endl;
    return 0;
}