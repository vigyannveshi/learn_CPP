/*
    There are two methods:
    1) Making the push method costly
    2) Making the pop method costly

    # Method 2: Making the pop method costly

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
        q1.push(val);
        n++;
    }

    void pop()
    {
        if (q1.empty())
        {
            cout << "Stack is empty:";
            return;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        n--;
        queue<int> temp;
        temp = q1;
        q1 = q2;
        q2 = temp;
    }

    int top()
    {
        if(q1.empty())
        {
            cout << "Stack is empty:";
            return -1;
        }
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int ans= q1.front();
        q2.push(ans);
        queue<int> temp;
        temp = q1;
        q1 = q2;
        q2 = temp;
        return ans;
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

};
int main()
{
    stack st;
    for (int i = 1; i <= 10; i++)
    {
        st.push(i);
    }
    
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty();
    return 0;
}