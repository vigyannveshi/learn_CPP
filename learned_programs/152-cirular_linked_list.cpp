#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;

class node
{
public:
    node *next;
    int data;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void deleteAtHead(node* &head);
 
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void display(node *head)
{
    node *temp = head;
    do
    {
        cout << temp->data << " --> ";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL" << endl;
}

void deleteAtHead(node* &head)
{
    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    node* delete_head = head;
    temp->next = head->next;
    head = head->next;
    delete delete_head;
}
void deleteNode(node *&head, int pos)
{
    if (pos==1)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    node *to_delete = temp->next;
    temp->next = temp->next->next;
    delete to_delete;
}
int main()
{
    node *head = NULL;
    for (int i = 0; i <= 10; i++)
    {
        insertAtTail(head, i);
    }
    display(head);
    deleteNode(head,5);
    deleteNode(head,1);
    deleteNode(head,1);
    deleteNode(head,1);
    display(head);
    return 0;
}