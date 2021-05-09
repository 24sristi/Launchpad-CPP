
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int currsum=0;
    int maxsum=INT_MIN;
    int minsum=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
            currsum+=a[i];
        else
            currsum=0;
        maxsum=max(currsum,maxsum);
    }
    currsum=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
            currsum+=a[i];
        else
            currsum=0;
        minsum=min(minsum,currsum);
    }
    cout<<max(maxsum,sum-minsum);

}
