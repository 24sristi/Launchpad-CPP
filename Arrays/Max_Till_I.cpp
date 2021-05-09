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
    int b[n];
    int maxim=INT_MIN;
    for(int i=0;i<n;i++)
    {
            maxim=max(a[i],maxim);
            b[i]=maxim;
    }
    //b is max till i array( O(N) )

}
