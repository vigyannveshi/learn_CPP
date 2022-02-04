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
    node* prev;
    node* next;

    /*Constructor*/
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void display(node* head);

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    n->next=head;
    head->prev=n;
    head=n;
}
void insertAtTail(node* &head , int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp= head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void deleteNode(node* &head, int val)
{
    node* temp=head;
    if(head->data==val)
    {
        node* deleting_head=temp;
        temp=temp->next;
        temp->prev=NULL;
        head=temp;
        delete deleting_head;
        return;
    }
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* to_delete=temp->next;
    if(temp->next->next!=NULL)
    {
    temp->next->next->prev=temp;
    }
    temp->next=temp->next->next;
    delete to_delete;
}
void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" --> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head =NULL;
    for(int i=-1;i>=-5;i--)
    {
    insertAtHead(head,i);
    }
    for(int i=0;i<=5;i++)
    {
        insertAtTail(head,i);
    }
    display(head);
    deleteNode(head,5);
    display(head);
    for(int i=-4;i<=-1;i++)
    {
        deleteNode(head,i);
    }
    display(head);
    return 0;
}