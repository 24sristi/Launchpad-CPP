/*
number of numbers between 1 and n that are divisible by prime numbers less than 20
https://hack.codingblocks.com/app/practice/1/1264/problem */

#include<bits/stdc++.h>
using namespace std;
#define int long long int

signed main()
{
    int t;
    cin>>t;
    int primes[]={2,3,5,7,11,13,17,19};
    int subsets=(1<<8)-1;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        for(int i=1;i<=subsets;i++)
        {
            int denom=(int)1;
            int setbits= __builtin_popcount(i);
            for(int j=0;j<8;j++)
            {
                if(i&(1<<j))
                {
                    denom=denom*primes[j];
                }
            }
            if(setbits&1)
            {
                ans+=(n/denom);
            }
            else{
                ans-=(n/denom);
            }
        }
        cout<<ans<<endl;
    }
}