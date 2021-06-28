#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int a[], int n)
{
    if(n==1)
    {
        return;
    }
    for(int j=0;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
        }
    }
    BubbleSort(a,n-1);
}

void BubbleSort_recursive(int a[], int j, int n)
{
    //base case
    if(n==1)
    {
        return;
    }
    if(j==n-1)
    {
        //single pass complete
        return BubbleSort_recursive(a,0,n-1);
    }
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
    }
    BubbleSort_recursive(a,j+1,n);
    return;
}

int main()
{
    int a[]={1,4,2,5,2,8,10,7};
    int n= sizeof(a)/sizeof(int);
    BubbleSort_recursive(a,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}