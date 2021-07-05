//SORT 0,1,2
#include<bits/stdc++.h>
using namespace std;

void DNFsort(int *a, int n)
{
    int lo=0;
    int mid=0;
    int hi=n-1;
    while(mid<=hi)
    {
        if(a[mid]==0)
        {
            swap(a[lo], a[mid]);
            lo++;
            mid++;
        }
        if(a[mid]==1)
        {
            mid++;
        }
        if(a[mid]==2)
        {
            swap(a[mid], a[hi]);
            hi--;
        }
    }
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
    DNFsort(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
        
}