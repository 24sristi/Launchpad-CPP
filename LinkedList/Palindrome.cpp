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
Node* pleft;
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

bool isPalindromehelper(Node* pright)
{
    if(pright==NULL)
    {
        return true;
    }
    bool rres=isPalindromehelper(pright->next);
    if(rres==false)
    {
        return false;
    }
    else if(pleft->data!=pright->data)
    {
        return false;
    }
    else
    {
        pleft=pleft->next;
        return true;
    }
}

bool isPalindrome(Node* head)
{
    pleft=head;
    return isPalindromehelper(head);
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
    if(isPalindrome(head))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}