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
    /*this is the pointer that points to next node, hence the data type is node*/
    node* next; 

    //constructor to easy out defining node
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

/*Insertion of element at head of the linked list*/
void insertAtHead(node* &head, int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}




/*Insertion of element at tail of the linked list*/

/*Here head is taken by reference and not by value, as we need to modify our linked list*/
void insertAtTail(node* &head, int val )
{
    node* n=new node(val); // Assigning  memory in heap to a new node along with a value;

    /*If link list has no nodes*/
    if(head==NULL)
    {
        head=n;
        return;
    }

    /*If link list has atleast one node*/
    node*temp=head;
    /*Here temp->next is used to jump to address of the next node */
    while(temp->next!=NULL)
    {
        temp=temp->next;
    } 
    temp->next=n;

}

/*Searching in a linked list*/
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

/*Here we shall use head by value and not by reference, as we are not modifying the link list*/
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


int main()
{
    node*head=NULL;
    insertAtTail(head,1);
    display(head);
    for(int i=2;i<=5;i++)
    {
        insertAtTail(head,i);
    }
    display(head);
    insertAtHead(head,0);
    display(head);

    if(search(head,2)==true)
    {
        cout<<"element is found"<<endl;
    }
    return 0;
}