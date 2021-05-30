#include<bits/stdc++.h>
using namespace std;

bool isPossible(int books[], int n, int child, int curr_min)
{
    int count=1;
    int pages_read=0;
    for(int i=0;i<n;i++)
    {
        if(pages_read+books[i]>curr_min)
        {
            pages_read=books[i];
            count++;
            if(count>child)
            {
                return false;
            }
        }
        else{
            pages_read+=books[i];
        }
    }
    return true;
}

int findPage(int books[], int n, int child)
{
    if(n<child)
    {
        return -1;
    }
    int total=0;
    for(int i=0;i<n;i++)
    {
        total+=books[i];
    }
    int s=books[n-1];
    int l=total;
    int ans=0;
        
    while(s<=l)
    {
        int mid=(s+l)/2;
        if(isPossible(books, n, child, mid))
        {
            ans=mid;
			l=mid-1;
        }
        else{
            s=mid+1;
        }

    }
	return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, child;
        cin>>n>>child;
        int books[n];
        int maxim=INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin>>books[i];
        }
        cout<<findPage(books, n, child);
		cout<<endl;
    }  
}