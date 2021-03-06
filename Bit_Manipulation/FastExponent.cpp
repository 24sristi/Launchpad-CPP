#include<bits/stdc++.h>
using namespace std;

int fastexponent(int a, int n) // takes O(logn) time
{
    int ans=1;
    while(n>0)
    {
        int last_digit=n&1;
        n=n>>1;
        if(last_digit==1)
        {
            ans*=a;
        }
        a*=a;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //take input
        int a,n;
        cin>>a>>n;

        //print output
        cout<<fastexponent(a,n)<<endl;
    }
}