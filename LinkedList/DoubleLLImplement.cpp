#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int d)
        {
            data =d;
            next = NULL;
        }
};

void insert(Node* &head, int d)
{
    Node* n= new Node(d);
    Node* temp = head;
    n->next=head;
    if(temp!=NULL)
    {
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=n;
    }
    head=n;
}

void print(Node* head)
{
    Node* temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main()
{
    Node* head =NULL;
    insert(head,10);
    insert(head,20);
    insert(head,30);
    insert(head,40);
    insert(head,50);
    insert(head,60);
    print(head);
}