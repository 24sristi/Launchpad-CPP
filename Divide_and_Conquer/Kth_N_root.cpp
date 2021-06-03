/*
You are given two integers n and k. Find the greatest integer x, such that, x^k <= n.

Input Format
First line contains number of test cases, T. Next T lines contains integers, n and k.

Constraints
1<=T<=10
1<=N<=10^15
1<=K<=10^4

Output Format
Output the integer x

Sample Input
2
10000 1
1000000000000000 10
Sample Output
10000
31
Explanation
For the first test case, for x=10000, 10000^1=10000=n

*/

#include<bits/stdc++.h>
using namespace std;
#define int long long int

bool checkmid(int n, int k, int mid)
{
    if(pow(mid,k)<=n)
    {
        return true;
    }
    return false;
}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int s=0;
        int e=n;
        int ans=0;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(checkmid(n,k,mid))
            {
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}