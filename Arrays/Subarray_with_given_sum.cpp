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
    int s=-1;
    int e=-1;
    int i=0;
    int j=0;
    int sum=0;
    while(j<n && sum+a[j]<=targetsum)
    {
        sum+=a[j];
        j++;
    }
    if(sum==targetsum)
    {
        cout<<i+1<<" and "<<j;
        return 0;
    }
    while(j<n)
    {
        sum+=a[j];
        while(sum>targetsum)
        {
            sum-=a[i];
            i++;
        }
        if(sum==targetsum)
        {
            s=i+1;
            e=j+1;
            break;
        }
        j++;
    }
        cout<<s<<" and "<<e;
 //make currsum and targetsum. two pointers i and j. initially iterate j until currsum(sum+=a[j])<=target
 //iterate i until currsum-=a[i]>target. //ONLY WORKS FOR POSITIVE ELEMENTS 


}
