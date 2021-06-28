#include<bits/stdc++.h>
using namespace std;

int Allocc(int a[],int i, int n,int k)
{
    if(i==n)
    {
        return;
    }
    if(a[i]==k)
    {
        cout<<i;
    }
    Allocc(a,i+1,n,k);
}

int Firstocc(int a[], int n, int k)
{
    if(n==0)
    {
        return -1;
    }
    if(a[0]==k)
    {
        return 0;
    }
    int i = Firstocc(a+1, n-1,k);
    if(i==-1)
    {
        return -1;
    }
    return i+1;
}

int lastOcc(int a[], int n, int k)
{
    if(n==0)
    {
        return -1;
    }
    int i= lastOcc(a+1,n-1,k);
    if(i==-1)
    {
        if(a[0]==k)
        {
            return 0;
        }
        else{
            return -1;
        }
    }
    return i+1;
}

int linearSearch(int a[],int i, int n, int k)
{
    if(i==n)
    {
        return -1;
    }
    if(a[i]==k)
    {
        return i;
    }
    return linearSearch(a, i+1,n,k);
    
}

int main()
{
    int a[]={1,4,2,5,2,8,10,7};
    int n= sizeof(a)/sizeof(int);
    int k;
    cin>>k;
    cout<<Firstocc(a,n,k);
    cout<<linearSearch(a,0,n,k);
}