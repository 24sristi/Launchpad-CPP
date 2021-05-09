#include <bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int n, int k)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
    int m=(s+e)/2;
    if(a[m]==k)
    {
        return m;
    }
    else if(a[m]>k)
    {
        e=m-1;
    }
    else{
        s=m+1;
    }
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<binarysearch(a,n,k);
}
