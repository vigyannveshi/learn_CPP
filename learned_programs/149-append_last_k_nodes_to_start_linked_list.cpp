/*
    Appending last k-nodes to start of a linked list
    Time complexity of the program =O(n).
*/
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
    int data;
    node* next;

    /*Constructor*/
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val)
{
    node* n =new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head, int val)
{
    node* n=new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
} 

void display(node* head)
{
    node* temp =head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" --> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

/*Need to find the length of the linked list*/
int len(node* head)
{
    node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    return count;
}

node* kappend(node* &head, int k)
{
    node* newHead;
    node* newTail;
    node* tail=head;
    int l=len(head);
    /*Inorder to handle k>l, (if l>k k=k; if l<k k=k%l)*/
    k=k%l;
    int count=1;
    while(tail->next!=NULL)
    {
        if(count==(l-k))
        {
            newTail=tail;
        }
        if(count==(l-k+1))
        {
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;
    return newHead;
}

int main()
{
    node* head=NULL;
    for(int i=1;i<=6;i++)
    {
        insertAtTail(head,i);
    }    
    display(head);
    display(kappend(head,3));

    return 0;
}