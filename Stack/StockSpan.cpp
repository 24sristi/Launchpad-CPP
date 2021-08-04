#include<bits/stdc++.h>
using namespace std;

void stockSpan(int prices[], int n, int span[])
{
    stack<int>s;
    s.push(0);
    span[0]=1;
    for(int i=1;i<n;i++)
    {
        int currprice=prices[i];
        while(!s.empty() && prices[s.top()]<currprice)
        {
            s.pop();
        }
        if(!s.empty())
        {
            span[i]=i-s.top();
        }
        else{
            span[i]=i+1;
        }
        s.push(i);
    }
}

int main()
{
    int prices[]={10,80,60,70,60,75,85};
    int n= sizeof(prices)/sizeof(int);
    int span[10000];

    stockSpan(prices,n,span);
    for (int i = 0; i < n; i++)
    {
        cout<<span[i]<<" ";
    }
    
}