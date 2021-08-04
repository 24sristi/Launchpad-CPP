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

Node* recreverse(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* shead = recreverse(head->next);
    head->next->next=head;
    head->next=NULL;

    return shead;
}


Node* kappend(Node *head,int k,int n){
    
    Node* oldHead = head;
    Node* fast = head;
    Node* slow = head;
    for(long i=0;i < k && fast->next!=NULL ;i++){
        fast = fast->next;
    }
    while(fast->next!=NULL && fast!=NULL){
        fast = fast->next;
        slow = slow->next;
    }
    Node* newHead = slow->next;
    slow->next = NULL;
    fast->next = oldHead;
    return newHead;
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
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        Insertatend(head,d);
    }
	cin>>k;
    if(k==0 || k%n==0)
    {
        print(head);
    }
    else
    {
    head = kappend(head,k%n,n);
    print(head);
    }
}