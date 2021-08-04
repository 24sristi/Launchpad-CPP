#include<bits/stdc++.h>
using namespace std;

vector<int>NextGreaterEle(vector<int>v)
{
    int n=v.size();
    vector<int>ans(n);
    stack<int>st;
    st.push(n-1);
    ans[n-1]=n;
    for (int i = n - 2; i >= 0; i--)
    {
        while(!st.empty() && v[i]>=v[st.top()])
        {
            st.pop();
        }
        if(st.empty())
        {
            ans[i]=n;
        }
        else{
            ans[i]=st.top();
        }
        st.push(i);
    }
    return ans;

}

void slidingmax(vector<int>a, int k)
{
    vector<int>nge=NextGreaterEle(a);
    int j=0;
    for (int i = 0; i <= a.size()-k; i++)
    {
        if(j<i)
        {
            j=i;
        }
        while(nge[j]<i+k)
        {
            j=nge[j];
        }
        cout<<a[j]<<" ";
    }
    return;

}



int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    slidingmax(a,k);
}