#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

#define n 100
class stack
{
private:
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "No element in stack:";
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1; // Better way to do instead of using if-else-if
    }
};
int main()
{
    stack st;
    for (int i = 1; i <= 10; i++)
    {
        st.push(i);
    }
        for (int i = 1; i <= 11; i++)
    {
        cout<<st.Top()<<endl;
        st.pop();
    }
    cout<<st.empty();
    return 0;
}