#include<bits/stdc++.h>
using namespace std;

int TilingWays(int n)
{
    if(n<4)
    {
        return 1;
    }
    return TilingWays(n-1)+TilingWays(n-4);
}

int main()
{
    int n;
    cin>>n;
    cout<<TilingWays(n);
}