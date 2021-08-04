#include<bits/stdc++.h>
using namespace std;
int cnt =0;

void Subsetprob(int *in, int sum, int i,int n)
{
    if(i==n)
    {
        if(sum==0)
        {
            cnt++;
            return;
        }
    }
    Subsetprob(in,sum+in[i],i+1,n);
    Subsetprob(in,sum,i+1,n);

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i <n; i++)
        {
            cin>>a[i];
        }
        Subsetprob(a,0,0,n);
        if(cnt)
        {
            cout<<"True";
        }
        else{
            cout<<"False";
        }
    }
}