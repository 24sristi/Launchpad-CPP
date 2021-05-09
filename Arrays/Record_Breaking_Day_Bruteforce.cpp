//ques: https://drive.google.com/drive/folders/1-PNukHSuFB4NsmGI1U4772DBXr3eOoxR
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
    int maxim=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            maxim=max(a[j],maxim);
        }
        if(a[i]==maxim && a[i]>a[i+1])
        {
            cout<<i;//i=record breaking day
        }
    }
}
