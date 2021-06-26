#include<bits/stdc++.h>
using namespace std;

int maxXor(int a, int b)
{
    int LXR = a^b;
    int mxpos=0;
    while(LXR)
    {
        mxpos++;
        LXR=LXR>>1;
    }
    int maximXor=0;
    int x=1;
    while(mxpos)
    {
        maximXor+=x;
        x<<=1;
        mxpos--;
    }
    return maximXor;
}


int main()
{
    int a,b;
    cin>>a>>b;
    cout<<maxXor(a,b);
    
}