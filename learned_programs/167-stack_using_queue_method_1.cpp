/*
    There are two methods:
    1) Making the push method costly
    2) Making the pop method costly

    # Method 1: Making the push method costly

*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
// #include <stack> // we are creating a stack.
#include <queue>

using namespace std;

class stack
{
    int n;
    queue<int> q1;
    queue<int> q2;

    public:
    stack()
    {
        n = 0;
    }
    void push(int val)
    {
        q2.push(val);
        n++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp;
        temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop()
    {
        if (n == 0)
        {
            cout << "Stack is empty:";
            return;
        }
        q1.pop();
        n--;
    }

    int top()
    {
        if (n == 0)
        {
            cout << "Stack is empty:";
            return -1;
        }
        return q1.front();
    }
    
    int size()
    {
        return n;
    }

    bool empty()
    {
        if(n==0)
        {
            return 1;
        }
        return 0;
    }

    void display()
    {
        queue<int> temp;
        temp = q1;
        while(!temp.empty())
        {
            cout<<temp.front()<<" ";
            temp.pop();
        }
        cout<<endl;
    }
};
int main()
{
    stack st;
    for (int i = 1; i <= 10; i++)
    {
        st.push(i);
    }
    st.display();
    for (int i = 1; i <= 5; i++)
    {
        st.pop();
    }
    cout<<st.size()<<endl;
    cout<<st.empty();
    return 0;
}