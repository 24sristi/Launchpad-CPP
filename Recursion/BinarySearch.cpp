#include<iostream>
using namespace std;

int BinarySearch(int a[],int l,int h,int k)
{
    int mid=(l+h)/2;
    if(l<=h)
    {
    if(a[mid]==k)
    {
        return mid;
    }
    else if(a[mid]<k)
    {
        return BinarySearch(a,mid+1,h,k);
    }
    else{
        return BinarySearch(a,l,mid-1,k);
    }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<BinarySearch(a,0,n,k);
}