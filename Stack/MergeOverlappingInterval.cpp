#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2)
{
    return p1.first<p2.first;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int s,e;
        cin>>s>>e;
        v.push_back(make_pair(s,e));
    }
    sort(v.begin(),v.end(),compare);
    stack<pair<int,int>>st;
    for(int i=0;i<v.size();i++)
    {
        if(i==0)
        {
            st.push(v[i]);
        }
        else
        {
            pair<int,int>p=st.top();
            if(v[i].first>p.second)
            {
                st.push(v[i]);
            }
            else
            {
                st.top().second=max(st.top().second,v[i].second);
            }
        }

    }
    stack<pair<int,int>>res;
    while(!st.empty())
    {
        res.push(st.top());
        st.pop();
    }
    while(res.size()!=0)
    {
        cout<<res.top().first<<" "<<res.top().second;
        res.pop();   
        cout<<endl;
    }
}