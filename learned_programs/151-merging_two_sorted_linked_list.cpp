/* 
    Merging two sorted linked list:
    Time Complexity: O(m+n); where m and n are the length of the first and second link list
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

node* merge(node* &head1, node* head2)
{
    node* p1=head1;
    node* p2=head2;
    node* dummy=new node(-1);
    node* p3=dummy;

    while(p1!=NULL&&p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL)
    {
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummy->next;
}

/*Recursive way to merge link list */
node* mergeR(node* &head1, node* & head2)
{
    /*Base Case:*/
    if(head1==NULL)
    {
        return head2;
    }
    if(head2==NULL)
    {
        return head1;
    }

    /*Recursive case:*/
    node* result;
    if(head1->data<head2->data)
    {
        result=head1;
        result->next=mergeR(head1->next,head2);
    }
    else
    {
        result=head2;
        result->next=mergeR(head1,head2->next);
    }
    return result;
}
int main()
{
    node* head1=NULL;
    node* head2=NULL;
    for(int i=0;i<=10;i+=2) 
    {
        insertAtTail(head1,i);
    }
    for(int i=1;i<=9;i+=2) 
    {
        insertAtTail(head2,i);
    }
    display(head1);
    display(head2);
    display(mergeR(head1,head2));
    return 0;
}