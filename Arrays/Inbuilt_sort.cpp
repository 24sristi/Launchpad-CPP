#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b)
{
    return a>b;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n, compare);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
