#include<bits/stdc++.h>
using namespace std;

vector<int>nseright(vector<int>a, int n)
{
    stack<int>s;
    vector<int>rb(n);
    s.push(n-1);
    rb[n-1]=n;
    for (int i = n - 2; i >= 0; i--)
    {
        while (!s.empty() && a[i]<=a[s.top()])
        {
            s.pop();
        }
        if(s.empty())
        {
            rb[i]=n;
        }
        else{
            rb[i]=s.top();
        }
        s.push(i);
    }
    return rb;
}

vector<int>nseleft(vector<int>a, int n)
{
    stack<int>s;
    vector<int>lb(n);
    s.push(0);
    lb[0]=-1;
    for (int i = 1; i < n; i++)
    {
        while (!s.empty() && a[i]<=a[s.top()])
        {
            s.pop();
        }
        if(s.empty())
        {
            lb[i]=-1;
        }
        else{
            lb[i]=s.top();
        }
        s.push(i);
    }
    return lb;
}

int largestArea(vector<int>a)
{
    int n= a.size();
    vector<int>rb=nseright(a,n);
    vector<int>lb=nseleft(a,n);
    int maxarea=0;
    for(int i=0;i<n;i++)
    {
        int width=rb[i]-lb[i]-1;
        int area = width*a[i];
        maxarea=max(area,maxarea);
    }
    return maxarea;

}

int main()
{
    vector<int>a{6,2,5,4,5,1,6};
    cout<<largestArea(a);
}