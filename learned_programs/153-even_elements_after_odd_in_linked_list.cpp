/*Even After Odd in linked list: time complexity if O(n), where n is the lenght of our linked list*/

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
    node* next;
    int data;

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

void evenAfterOdd(node* &head)
{
    node* odd=head;
    node* even=head->next;
    node* evenStart=head->next;

    while(odd->next!=NULL&&even->next!=NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenStart;
    if(odd->next==NULL)
    {
        even->next=NULL;
    }
}
int main()
{
    node* head=NULL;
    for(int i=1;i<=7;i++)
    {
        insertAtTail(head,i);
    }
    display(head);
    evenAfterOdd(head);
    display(head);
}