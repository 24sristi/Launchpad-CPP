#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void PrimeSieve( int *p)
{
    for(ll i=3;i<=1000000;i+=2)
    {
        p[i]=1;
    }
    for(ll i=3; i<=1000000;i+=2)
    {
        if(p[i]==1)
        {
            for(ll j=i*i;j<=1000000;j+=i)
            {
                p[j]=0;
            }
        }
    }
    p[1]=p[0]=0;
    p[2]=1;
}


int main()
{
    int p[1000005]={0};
    PrimeSieve(p);
    int cs[1000005]={0};
    // cs[0]=p[0];
    for(int i=1;i<=1000000;i++)
    {
        cs[i]=cs[i-1]+p[i];
    }
	int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<cs[b]-cs[a-1]<<"\n";
    } 

}