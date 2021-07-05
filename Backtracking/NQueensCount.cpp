#include<bits/stdc++.h>
using namespace std;

bitset<30> col, d1,d2;

void solve(int n, int &ans, int r)
{
    if(r==n)
    {
        ans++;
        return;
    }
    for(int c= 0;c<n;c++)
    {
        if(!col[c] && !d1[r-c+n-1] && !d2[r+c])
        {
            col[c]=d1[r-c+n-1]=d2[r+c]=1;
            solve(n,ans,r+1);
            col[c]=d1[r-c+n-1]=d2[r+c]=0;//backtrack
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int ans=0;
    solve(n,ans,0);
    cout<<ans;
}