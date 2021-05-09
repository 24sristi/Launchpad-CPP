#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<n;i++)
    {
        smallest=min(smallest,a[i]);
        largest=max(largest,a[i]);
    }
    cout<<"smallest: "<<smallest<<endl;
    cout<<"largest: "<<largest;
}
