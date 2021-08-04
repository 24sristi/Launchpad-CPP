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

int length(Node* head)
{
    int cnt=0;
    while(head!=NULL)
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}

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

void InsertatMiddle(Node* &head, int d, int p)
{
    if(p==0 || head==NULL)
    {
        InsertatHead(head,d);
        return;
    }
    else if(p>length(head))
    {
        Insertatend(head,d);
        return;
    }
    else
    {
        Node* temp = head;
        for(int i=1;i<=p-1;i++)
        {
            temp=temp->next;
        }
        Node* n = new Node(d);
        n->next=temp->next;
        temp->next=n;
    }
}

void deleteatHead (Node* &head)
{
    if(head==NULL)
    {
        return;
    }
    Node* temp = head->next;
    delete head;
    head=temp;
}

void deleteatmid(Node* &head, int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteatHead(head);
        return;
    }
    Node* temp = head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    Node* todelete = temp->next;
    temp->next=temp->next->next;
    delete todelete;
}


void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data;
        head=head->next;
    }
}

bool search(Node* head, int val)
{
    Node* temp= head;
    while(temp!=NULL)
    {
        if(temp->data==val)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

bool searchrecursive(Node* head, int val)
{
    if(head==NULL)
    {
        return false;
    }
    if(head->data==val)
    {
        return true;
    }
    else{
        return searchrecursive(head->next, val);
    }
}

Node* takeinput()
{
    Node* head =NULL;
    int d;
    cin>>d;
    while (d!=-1)
    {
        InsertatHead(head,d);
        cin>>d;
    }
    return head;
}

ostream& operator<<(ostream &os, Node* head)
{
    print(head);
    return os;
}

istream& operator>>(istream &is,Node* head)
{
    head = takeinput();
    return is;
}

void reverse(Node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return;
    }
    Node* curr = head;
    Node* prev = NULL;
    Node*n;
    while(curr!=NULL)
    {
        n= curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
    }
    head=prev;
}

Node* recreverse(Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* shead = recreverse(head->next);
    //1.  Node* temp= shead;
    // while(temp->next!=NULL)
    // {
    //     temp=temp->next;
    // }
    //2.  Node* temp = head->next;
    // temp->next=head;
    // head->next=NULL;//moved down
    head->next->next=head;
    head->next=NULL;

    return shead;
}

Node* Midpoint(Node* head)
{
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node* Kfromend(Node* head, int k)
{
    if(head==NULL)
    {
        return;
    }
    Node*slow=head;
    Node* fast =head;
    for(int i=1;i<=k;i++)
    {
        if(fast==NULL)
        {
            return NULL;
        }
        fast=fast->next;
    }
    while(fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}

Node* Merge(Node* a, Node* b)
{
    if(a==NULL)
    {
        return b;
    }
    if(b==NULL)
    {
        return a;
    }
    Node* c=NULL;
    if(a->data<b->data)
    {
        c=a;
        c->next= Merge(a->next, b);
    }
    else
    {
        c=b;
        c->next= Merge(a, b->next);
    }
    return c;
}

Node* MergeSort( Node* head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    Node* mid = Midpoint(head);
    Node* a = head;
    Node* b = mid->next;
    mid->next=NULL;
    a=MergeSort(a);
    b=MergeSort(b);
    Node* c= Merge(a,b);
    return c;
}

bool detectCycle(Node* head)
{
    Node* slow= head;
    Node* fast = head;
    while(fast!=NULL || fast->next!=NULL)
    {
        fast=fast->next->next;
        slow= slow->next;
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}

void RemoveCycle(Node* head)
{
    Node* slow = head;
    Node* fast= head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);
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
    Node* head =NULL;
    InsertatHead(head,2);
    InsertatHead(head,4);
    InsertatHead(head,1);
    InsertatHead(head,6);
    InsertatHead(head,3);
    InsertatMiddle(head,7,3);
    print(head);
    cout<<endl;
    if(searchrecursive(head,2))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    head= recreverse(head);
    print(head);
    
}