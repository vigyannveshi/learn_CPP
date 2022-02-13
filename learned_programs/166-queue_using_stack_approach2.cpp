/*
    Approach 2: Using Function Call stack/ inbuilt stack
    # enQueue Operation:
        *time complexity = O(1);
        -> Push x to stack1
    # deQueue Operation:
        *time complexity = O(N);
        ->1) stack1 is empty, then print error
        ->2) If stack1 has only one element then return it.
        ->3) Recursively  pop everthing from the stack1, store the  popped item 
             in a variable res, push the res back to stack1 and then return res
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

class queue
{
    stack<int> s1;

    public:

        void push(int x)
        {
            s1.push(x);
        }

        int pop()
        {
            if(s1.empty())
            {
                cout<<"Queue is empty: ";
                return -1;
            }
            int x=s1.top();
            s1.pop();
            if(s1.empty())
            {
                return x;
            }
            int item =pop();
            s1.push(x);
            return item;
        }

        bool empty()
        {
            if(s1.empty())
            {
                return 1;
            }
            return 0;
        }
};

int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.empty()<<endl;
    return 0;
}