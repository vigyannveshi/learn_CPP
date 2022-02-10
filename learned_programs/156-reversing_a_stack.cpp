/*Stack reversal using recursion*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int e)
{
    /*Base Condition*/
    if(st.empty())
    {
        st.push(e);
        return;
    }
    /*Recursive Condition*/ 
    int topElement=st.top();
    st.pop();
    insertAtBottom(st,e);

    st.push(topElement);
}
void reverseStack(stack<int> &st)
{
    /*Base Condition*/
    if(st.empty())
    {
        return;
    }
    /*Recursive Condition*/
    int e=st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,e);
}
void display(stack<int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}

int main()
{
    stack<int> st;
    for(int i=1;i<11;i++)
    {
        st.push(i);
    }
    display(st);
    reverseStack(st);
    display(st);
    return 0;
}