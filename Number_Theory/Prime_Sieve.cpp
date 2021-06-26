#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int x= 1000000;

void PrimeSieve( int *p)
{
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

}

signed main()
{
    int n;
    cin>>n;

    int p[1000005]={0};
    p[1]=1;
    p[2]=1;
    PrimeSieve(p);

    for (int i = 1; i <= n; i++)
    {
        if(p[i]==1)
        {
            cout<<i<<" ";
        }
    }
    

}