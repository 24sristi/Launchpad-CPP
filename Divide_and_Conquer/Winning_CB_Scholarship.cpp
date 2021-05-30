#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool getdiscount(int n, int m, int x, int y,int mid)
{
    if((mid*x)<=m+((n-mid)*y))
    {
        return true;
    }
    return false;
}

signed main()
{
    int n, m, x, y;
    cin>>n>>m>>x>>y;
    int s=0;
    int e=n;
    int ans=0;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(getdiscount(n,m,x,y,mid))
        {
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    cout<<ans;
}