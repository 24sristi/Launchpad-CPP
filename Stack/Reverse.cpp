#include<iostream>
#include<stack>
using namespace std;

void transfer(stack<int>&s1, stack<int>&s2, int n)
{
    for(int i=0;i<n;i++)
    {
        s2.push(s1.top());
        s1.pop();
    }
}

void reverstack(stack<int>s)
{
    stack<int>helper;
    int n = s.size();
    for(int i=0;i<n;i++)
    {
        int x= s.top();
        s.pop();
        transfer(s,helper,n-i-1);
        s.push(x);
        transfer(helper,s,n-i-1);
    }
}

void insertatbottom(stack<int>s, int x)
{
    if(s.empty())
    {
        s.push(x);
        return;
    }
    int data = s.top();
    s.pop();
    insertatbottom(s,x);
    s.push(data);
}

void reverserecursion(stack<int>s)
{
    if(s.empty())
    {
        return;
    }
    int x= s.top();
    s.pop();
    reverserecursion(s);
    insertatbottom(s,x);
}

int main()
{
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverstack(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}