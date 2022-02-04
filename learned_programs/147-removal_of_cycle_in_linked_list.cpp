/* 
    Detection and Removal of cycle in a linked list
    -->Using Floyd's (Hare and Tortise Algorithm)
 */

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

bool detectCycle(node* &head);
    
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


void makeCycle(node* &head, int pos)
{
    node* temp=head;
    node* startNode;
    int count =1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

bool detectCycle(node* &head)
{
    node* fast=head;
    node* slow=head;

    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}

void deleteCycle(node* &head)
{
    node* fast=head;
    node* slow=head;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);

    fast=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next; 
    }
    slow->next=NULL;
}



int main()
{
    node*head=NULL;
    for(int i=0;i<=5;i++)
    {
        insertAtTail(head,i);
    }
    display(head);
    makeCycle(head,3);
    cout<<detectCycle(head)<<endl;
    deleteCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
}