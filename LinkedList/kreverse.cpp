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
Node* reverse(Node* head, int k)
    { 

       Node* current = head; 
       Node* nextn = NULL; 
       Node* prev = NULL; 

       int count = 0; 

       /* Reverse first k nodes of linked list */
       while (count < k && current != NULL)  
       { 
           nextn = current->next; 
           current->next = prev; 
           prev = current; 
           current = nextn; 
           count++; 
       } 

       /* next is now a pointer to (k+1)th node  
          Recursively call for the list starting from current. 
          And make rest of the list as next of first node */
       if (nextn != NULL)  
          head->next = reverse(nextn, k); 

       // prev is now head of input list 
       return prev; 
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
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int d;
        cin>>d;
        Insertatend(head,d);
    }
    head = reverse(head,k);
    print(head);
}