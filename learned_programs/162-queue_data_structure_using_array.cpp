#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
#include <stack>
using namespace std;

#define n 20

class queue
{
    int *arr;
    int front;
    int back;

public:
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1)
        {
            front++;
        }
    }

    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is empty:";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return 1;
        }
        return 0;
    }
    void display()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is empty:";
        }
        int i = front;
        while (i <= back)
        {
            cout << arr[i] << " ";
            i++;
        }
        cout << endl;
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