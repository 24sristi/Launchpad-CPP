#include <bits/stdc++.h>
using namespace std;
 
int MaxsubarraySum(int cumsum[], int n)
{
    int currsum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            currsum=0;
            currsum=cumsum[j]-cumsum[i-1];
            maxSum=max(currsum,maxSum);
        }
    }
    return maxSum;
}
int main() {
    int n;
    cin>>n;
    int a[n];
    int cumsum[n];
    cumsum[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cumsum[i]=cumsum[i-1]+a[i];
    }
    cout<<MaxsubarraySum(cumsum,n);
}
