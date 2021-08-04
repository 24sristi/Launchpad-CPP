#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

class MinMaxStack
{
    vector<int>stack;
    vector<int>minstack;
    vector<int>maxstack;

    public:

        void push(int data)
        {
            int currmin=data;
            int currmax=data;

            if(minstack.size())
            {
                currmin=min(minstack[minstack.size()-1], currmin);
                currmax=max(maxstack[maxstack.size()-1],currmax);
            }
            minstack.push_back(currmin);
            maxstack.push_back(currmax);
            stack.push_back(data);
        }
        int getmin()
        {
            return minstack[minstack.size()-1];
        }
        int getmax()
        {
            return maxstack[maxstack.size()-1];
        }
        int top()
        {
            return stack[stack.size()-1];
        }
        bool empty()
        {
            return stack.size()==0;
        }
        void pop()
        {
            stack.pop_back();
            minstack.pop_back();
            maxstack.pop_back();
        }

};