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
Node* fleft;
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
void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

void foldhelper(Node* fright,int floor,int size)
{
    if(fright==NULL)
    {
        return;
    }   
    foldhelper(fright->next,floor+1,size);
    if(floor>size/2)
    {
        Node* temp= fleft->next;
        fleft->next=fright;
        fright->next=temp;
        fleft=temp;
    }
    else if(floor==size/2)
    {
        fright->next=NULL;
    }
}

void fold(Node* head)
{
    fleft=head;
    int size=length(head);
    foldhelper(head,0,size);
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
    print(head);
    cout<<endl;
    fold(head);
    print(head);
    
}