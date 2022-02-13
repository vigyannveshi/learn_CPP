/*
    Queue using stacks:
    It has two approaches--> As per what was taught on Apna College;
    Since I wasn't convinced with some of its working. I decided to come up with my own approach
    In this approach lets make s2 as reversal.

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

/*Stack reversing using  Recursion*/
void insertAtBottom(stack<int> &st, int e)
{
    /*Base Condition*/
    if (st.empty())
    {
        st.push(e);
        return;
    }
    /*Recursive Condition*/
    int topElement = st.top();
    st.pop();
    insertAtBottom(st, e);

    st.push(topElement);
}
void reverseStack(stack<int> &st)
{
    /*Base Condition*/
    if (st.empty())
    {
        return;
    }
    /*Recursive Condition*/
    int e = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, e);
}

/*End*/
class queue
{
    stack<int> s1, s2;

public:
    void push(int x)
    {
        s1.push(x);
    }

    void pop()
    {
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty:";
            return;
        }

        s2 = s1;
        while (!s1.empty())
        {
            s1.pop();
        }
        reverseStack(s2);
        s2.pop();
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    bool empty()
    {
        if (s1.empty() && s2.empty())
        {
            return 1;
        }
        return 0;
    }

    int peek()
    {
        s2=s1;
        reverseStack(s2);
        return s2.top();
    }
    void display()
    {
        s2=s1;
        reverseStack(s2);
        while(!s2.empty())
        {
            cout<<s2.top()<<" ";
            s2.pop();
        }
        cout<<endl;
    }
};

int main()
{
    queue q;
    for (int i = 1; i <= 10; i++)
    {
        q.push(i);
    }
    q.display();
    for (int i = 0; i <= 4; i++)
    {
        q.pop();
    }
    cout << q.peek() << endl;
    q.display();
    for (int i = 0; i <= 4; i++)
    {
        q.pop();
    }
    cout << q.empty();
    return 0;
}