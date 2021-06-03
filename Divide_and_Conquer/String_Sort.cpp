#include<bits/stdc++.h>
using namespace std;

bool compare(string s1, string s2)
{
    int l1=s1.length();
    int l2=s2.length();
    for(int i=0;i<min(l1,l2);i++)
    {
        if(s1[i]!=s2[i])
        {
            return s1<s2;
        }
    }
    return l1>l2;
}

int main()
{
    int n;
    cin>>n;
    string a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n, compare);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}