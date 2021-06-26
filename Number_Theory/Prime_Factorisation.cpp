#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>>PrintFactor(int n)
{
    int cnt;
    vector<pair<int,int>>v;
    for(int i=2; i*i<=n;i++)
    {
        if(n%i==0)
        {
            cnt=0;
            while(n%i==0)
            {
                cnt++;
                n=n/i;
            }
            v.push_back(make_pair(i,cnt));
        }
    }
    if(n!=1)
    {
        v.push_back(make_pair(n,1));
    }
    return v;
}

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

vector<int>factorise(int n, vector<int> &primes)
{
    vector<int>factors;
    factors.clear();
    for (int i = 0;primes[i]*primes[i]<=n; i++)
    {
        if(n%primes[i]==0)
        {
            factors.push_back(primes[i]);
        }
        while(n%primes[i]==0)
        {
            n=n/primes[i];
        }
    }

    if(n!=1)
    {
        factors.push_back(n);
    }
    return factors;
    
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
        vector<int>factors=factorise(n,primes);
        for(auto f : factors)
        {
            cout<<f<<" ";
        }
		cout<<endl;
        vector<pair<int,int>>factors2=PrintFactor(n);
        for(auto a: factors2)
        {
            cout<<a.first<<" "<<a.second<<endl;
        }
    }

}