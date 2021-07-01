#include<bits/stdc++.h>
using namespace std;

int profit(vector<pair<int,int>>v, int n, int c)
{
    if(n==0 || c==0)
    {
        return 0;
    }
    int ans =0;
    int x,y;
    x = y = 0;
    if(c>=v[n-1].first)
    {
        x= v[n-1].second + profit(v, n-1, c- v[n-1].first);
    }
    y= profit(v,n-1,c);
    return max(x,y);
}

int main()
{
    vector<pair<int,int>>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int qty, price;
        cin>>qty>>price;
        v.push_back(make_pair(qty,price));
    }
    int c;
    cin>>c;
    cout<<profit(v,n,c);
}