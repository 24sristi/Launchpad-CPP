#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i+=2)
    {
        if(i!=0 && a[i]<a[i-1])
        {
            swap(a[i],a[i-1]);
        }
        if(i!=n-1 && a[i]<a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}