//question: https://www.spoj.com/problems/PRATA/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

int checkpratas(int ranks[], int c, int p, int mid)//find no. of cooks required for given mid
{
    int ans=0;
    for (int i = 0; i < c; i++)
    {
    int sum=0;
        int r= ranks[i];
        while((sum+r)<=mid)
        {
            sum+=r;
            r+=ranks[i];
            ans++;
        }
    }
    return ans;
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p, c;
        cin>>p>>c;
        int r[c];
        for(int i=0;i<c;i++)
        {
            cin>>r[i];
        }
        sort(r, r+c);
        int s=0;
        int e= 0;
        for(int i=1;i<=p;i++)
		 e+=r[c-1]*i;

        // cout<<e<<endl;
        int ans=0;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(checkpratas(r,c,p,mid)>=p)
            {
                ans=mid;
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }

        }
        cout<<ans<<endl;
    }
}