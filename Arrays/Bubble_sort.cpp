#include <bits/stdc++.h>
using namespace std;
void BubbleSort(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
               swap(a[j],a[j+1]);
        }
    }
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    BubbleSort(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
