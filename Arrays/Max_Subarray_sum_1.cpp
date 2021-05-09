#include <bits/stdc++.h>
using namespace std;
int MaxSubarraySum(int a[],int n)
{
    int currsum=0;
    int maximum= 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            currsum=0;
            for(int k=i;k<j;k++)
            {
                currsum+=a[k];
            }
            maximum=max(currsum,maximum);
        }
    }
    return maximum;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<MaxSubarraySum(a,n);
}
