#include<bits/stdc++.h>
using namespace std;

vector<int>NextGreaterEle(vector<int>v)
{
    int n=v.size();
    vector<int>ans(n);
    stack<int>st;
    st.push(v[n-1]);
    ans[n-1]=-1;
    for (int i = n - 2; i >= 0; i--)
    {
        while(!st.empty() && v[i]>=st.top())
        {
            st.pop();
        }
        if(st.empty())
        {
            ans[i]=-1;
        }
        else{
            ans[i]=st.top();
        }
        st.push(v[i]);
    }
    return ans;

}

vector<int>NextGreaterElement2(vector<int>v)
{
    int n=v.size();
    vector<int>ans(n);
    stack<int>st;
    st.push(0);
    for(int i=1;i<n;i++)
    {
        while(!st.empty() && v[i]>=v[st.top()])
        {
            int pos=st.top();
            ans[pos]=v[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        int pos=st.top();
        ans[pos]=-1;
        st.pop();
    }
    return ans;
}

int main()
{
    vector<int>v{5,8,3,4,10,4,6,2,3,9};
    vector<int>nge=NextGreaterEle(v);
    for (int i : nge)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>nge2=NextGreaterElement2(v);
    for (int i : nge2)
    {
        cout<<i<<" ";
    }
}