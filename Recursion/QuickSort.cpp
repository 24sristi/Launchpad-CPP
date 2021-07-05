#include<bits/stdc++.h>
using namespace std;

int partition(int *a, int s, int e)
{
    int i=s-1;
    int j=s;
    int pivot =a[e];
    for(;j<=e-1;)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
        j++;
    }
    swap(a[i+1],a[e]);
    return i+1;

}

void QuickSort(int *a, int s, int e)
{
    if(s>=e)
    {
        return;
    }
    int p= partition(a,s,e);
    QuickSort(a,s,p-1);
    QuickSort(a,p+1,e);

}

int main()
{
    int a[]={1,4,2,5,2,8,10,7};
    int n= sizeof(a)/sizeof(int);
    QuickSort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}