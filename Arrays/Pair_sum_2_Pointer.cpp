#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    int k;
    cin>>k;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i]+a[j]==k)
        {
            cout<<a[i]<<" "<<a[j]<<endl;
            i++;
            j--;
        }
        else if(a[i]+a[j]>k)
            j--;
        else if(a[i]+a[j]<k)
            i++;
    }
}
