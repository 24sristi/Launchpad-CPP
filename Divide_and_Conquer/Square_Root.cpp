//Finding square root using divide and conquer approach, timecomplexity: O(logn+p)

#include<bits/stdc++.h>
using namespace std;

float square_root(int n, int p)
{
    int s=0;
    int e=n;

    float ans=-1;

    while(s<=e)
    {
        int mid=(s+e)/2;
        if((mid*mid)==n)
        {
            return mid;
        }
        else if((mid*mid)<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    float inc= 0.1;
    for(int times=1;times<=p;times++)
    {
        while(ans*ans<=n)
        {
            ans=ans+inc;
        }
        ans=ans-inc;
        inc=inc/10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    cout<<square_root(n,p);

}