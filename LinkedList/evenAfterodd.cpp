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


void InsertatHead(Node* &head, int d)
{
    if(head==NULL)//first node
    {
        head = new Node(d);
        return;
    }
    Node *n = new Node(d);
    n->next=head;
    head=n;
}

void Insertatend(Node* &head, int d)
{
    if(head==NULL)
    {
        head = new Node(d);
        return;
    }
    Node* tail =head;
    while(tail->next!=NULL)
    {
        tail=tail->next;
    }
    tail->next = new Node(d);
    return;
}



Node* oddeven(Node* head)
{
    Node* odd=NULL;
    Node* even=NULL;
    Node* temp=head;
    while(temp!=NULL)
    {
        int x= temp->data;
        if(x%2==0)
        {
            Insertatend(even,x);
        }
        else{
            Insertatend(odd,x);
        }
        temp=temp->next;
    }
    Node* newhead=odd;
    while(odd->next!=NULL)
    {
        odd=odd->next;
    }
    odd->next=even;
    return newhead;
}

void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}



int main()
{
    Node* head =NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        Insertatend(head,d);
    }
    head = oddeven(head);
    print(head);
}