// An arithmetic array is an array that contains at least two integers and the differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays. Sarasvati has an array of N non-negative integers. The i-th integer of the array is Ai. She wants to choose a contiguous arithmetic subarray from her array that has the maximum length. Please help her to determine the length of the longest contiguous arithmetic subarray.
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
        int ans=2;
    int pd=a[1]-a[0];
    int curr=2;
    for(int i=2;i<n;i++)
    {
        if(pd==a[i]-a[i-1])
        {
            curr++;
        }
        else
        {
            pd=a[i]-a[i-1];
            curr=2;
        }
        ans=max(curr,ans);
    }
    cout<<ans;

}
