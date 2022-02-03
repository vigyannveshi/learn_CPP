/*There are two ways in which a linked list can be reversed
--> iterative approach
--> recursive approach    
*/

/*iterative approach*/
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

    //constructor to easy out defining node
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}


void insertAtTail(node* &head, int val )
{
    node* n=new node(val); 


    if(head==NULL)
    {
        head=n;
        return;
    }

    node*temp=head;
    
    while(temp->next!=NULL)
    {
        temp=temp->next;
    } 
    temp->next=n;

}

bool search(node* head, int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(key==(temp->data))
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}


void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" --> ";
        temp=temp->next;    
    }
    cout<<"NULL"<<endl;
}

node* Ireverse(node* &head)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while (currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
    
}

node* Rreverse(node* &head)
{
    /*Base case*/
    if(head==NULL||head->next==NULL)
    {
        return head;
    }

    /*Recursive case*/
    node* newhead= Rreverse(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

node* reversek(node* head ,int k)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count =0;
    while(currptr!=NULL&&count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
    head-> next=reversek(nextptr, k);
    }

    return prevptr;

}
int main()
{
    node*head=NULL;
    for(int i=0;i<=5;i++)
    {
        insertAtTail(head,i);
    }
    display(head);
    // display(Ireverse(head)); 
    // display(Rreverse(head));
    display(reversek(head,3));

}