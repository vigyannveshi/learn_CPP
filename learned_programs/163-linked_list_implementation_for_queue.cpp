/*
    Reason to implement queue in linked list: Memory management
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

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        node *to_delete = front;
        front = front->next;
        delete to_delete;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return 1;
        }
        return 0;
    }
    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
        }
        node* temp=front;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
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