#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Stack
{
    vector<T>v;
public:
    void push(T data)
    {
        v.push_back(data);
    }
    bool isempty()
    {
        return v.size()==0;
    }
    void pop()
    {
        v.pop_back();
    }
    T top()
    {
        return v[v.size()-1];
    }
};

int main()
{
    Stack<int>s;
    for(int i=1;i<=5;i++)
    {
        s.push(i*i);
    }
    while(!s.isempty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}