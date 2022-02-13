/*
    Approach 1:
    -->Using stacks the dequeue operation is costly
    # enQueue Operation:
        *time complexity = O(1);
        -> Push x to stack1
    # deQueue Operation:
        *time complexity = O(N);
        ->1) if both the stacks are empty, then print error
        ->2) if stack2 is empty
                while stack1 is not empty, push everthing from stack1 to stack 2
        ->3) Pop the element from stack 2 and return it

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
    stack<int> s2;

    public:

        void push(int x)
        {
            s1.push(x);
        }

        int pop()
        {
            if(s1.empty()&&s2.empty())
            {
                cout<<"Queue is empty: ";
                return -1;
            }
            if(s2.empty())
            {
                while(!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            int topVal=s2.top();
            s2.pop();
            return topVal;
        }

        bool empty()
        {
            if(s1.empty()&&s2.empty())
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