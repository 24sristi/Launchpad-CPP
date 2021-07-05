#include<bits/stdc++.h>
using namespace std;

void CountingSort(int *a, int n)
{
    int largest =-1;
    for(int i=0;i<n;i++)
    {
        largest=max(largest,a[i]);
    }
    int *freq = new int[largest+1]{0};
    for(int i=0;i<n;i++)
    {
        freq[a[i]]++;
    }
    int j=0;
    for(int i=0;i<=largest;i++)
    {
        while(freq[i])
        {
            a[j]=i;
            freq[i]--;
            j++;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    CountingSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}