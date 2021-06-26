#include<bits/stdc++.h>
using namespace std;

vector<int> PrimeSieve( int *p, int x)
{
    p[0]=p[1]=0;
    p[2]=1;
    for(int i=3;i<=x;i+=2)
    {
        p[i]=1;
    }
    for(int i=3; i<=x;i+=2)
    {
        if(p[i]==1)
        {
            for(int j=i*i;j<=x;j+=i)
            {
                p[j]=0;
            }
        }
    }
    vector<int>v;
    for(int i=2;i<x;i++)
    {
        if(p[i]==1)
        {
            v.push_back(i);
        }
    }
        return v;

}

int DivisorCount(int n, vector<int> &primes)
{
    int ans=1;
    for (int i = 0;primes[i]*primes[i]<=n; i++)
    {
        if(n%primes[i]==0)
        {
            int cnt=0;
            while(n%primes[i]==0)
            {
                cnt++;
                n=n/primes[i];
            }
            ans=ans*(cnt+1);
        }
    }

    if(n!=1)
    {
        ans=ans*2;
    }
    return ans;
    
}

int main()
{
    int x = 1000000;
    int p[x]={0};
    vector<int>primes=PrimeSieve(p,100);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int divisors= DivisorCount(n,primes);
        cout<<divisors<<endl;
    }
}