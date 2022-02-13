/*
    Here one of the disadvantages is that the code is only applicable for single digit operand
    
    - + 7 * 4 5 + 2 0

    Time Complexity: O(l), where l is the length of string given to us.

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

int prefix_evaluation(string s)
{
    stack<char> st;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
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
            case '^':
                st.push(pow(op1, op2));
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
    string s1 = "-+7*45+20";
    string s2= "*-9/84-/931";
    cout << prefix_evaluation(s1) << endl;             
    cout << prefix_evaluation(s2) << endl;             
    return 0;
}