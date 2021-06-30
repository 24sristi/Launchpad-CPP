#include <bits/stdc++.h>
using namespace std;

int StringtoInt(string s, int n)
{
    if(n==0)
    {
        return 0;
    }
    int digit = s[n-1]-'0';
    int x= StringtoInt(s,n-1);
    return x*10+digit;
}

int main()
{
    string s="1234";
    int len= s.length();
    cout<<StringtoInt(s,len);
}