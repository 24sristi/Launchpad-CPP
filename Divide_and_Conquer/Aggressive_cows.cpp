#include<bits/stdc++.h>
using namespace std;

bool CanPlaceCows(int stalls[],int n, int cows, int min_sep)
{
    int last_cow=stalls[0];
    int count=1;
    for (int i = 1; i < n; i++)
    {
        if(stalls[i]-last_cow>=min_sep)
        {
            last_cow=stalls[i];
            count++;
            if(count==cows)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int n, cows;
    cin>>n>>cows;
    int stalls[n];
    for (int i = 0; i < n; i++)
    {
        cin>>stalls[i];
    }
	sort(stalls, stalls+n);
    int s=0;
    int e=stalls[n-1]-stalls[0];
    int ans=0;

    while(s<=e)
    {
        int mid=(s+e)/2;
        if(CanPlaceCows(stalls, n, cows, mid))
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    cout<< ans;
    
}