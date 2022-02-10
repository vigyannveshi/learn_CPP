/*
Application of Stack: Reversing a sentence
-->Hey, how are you doing?
-->doing? you are how Hey,
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
/*Standard Template library for stack*/
#include <stack>
using namespace std;

void reverseSentence(string s)
{
    stack<string> st;
    for(int i=0;i<s.length();i++)
    {
        string word="";
        while(s[i]!=' '&&i<s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(st.empty()!=1)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main()
{
    string s="Hey, how are you doing?";
    cout<<s<<endl;
    reverseSentence(s);
    return 0;
}