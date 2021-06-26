#include<bits/stdc++.h>
using namespace std;

void filterChars(string s, int n)
{
    int j=0;
    while(n>0)
    {
        int last_digit=n&1;
        if(last_digit)
        {
            cout<<s[j];
        }
        j++;
        n=n>>1;
    }
}

void generateSubsets(string s, int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        filterChars(s,i);
        cout<<" ";
    }
}

int main()
{
    string s;
    cin>>s;
    int n = s.length();
    generateSubsets(s, n);
}