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
/*Overload the function based on parameters in order to address head deletion problem*/
void deleteNode(node* &head)
{
    node* to_delete=head;
    head=head->next;
    delete to_delete;
}

void deleteNode(node* &head, int key)
{
    /*Won't work if link list is empty*/
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteNode(head);
        return; 
    }
    /*Will work only for non corner cases, wont work if we wanna delete the head itself*/
    node* temp=head;
    while(((temp->next)->data!=key))
    {
        temp=temp->next;
    }
    /*You need to actually delete it from memory*/
    node* to_delete=temp->next;
    temp->next=temp->next->next;
    delete to_delete;
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


int main()
{
    node* head=NULL;
    insertAtHead(head,1);
    for(int i=2;i<=5;i++)
    {
        insertAtTail(head,i);
    }
    insertAtHead(head,0);
    display(head);
    /*deleting '3'*/
    deleteNode(head,3);
    display(head);
    deleteNode(head,2);
    display(head);
    deleteNode(head);
    display(head);
    
    return 0;
}