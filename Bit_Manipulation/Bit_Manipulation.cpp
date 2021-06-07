#include<iostream>
using namespace std;

int getbit(int n, int i)
{
    int mask= (1<<i);
    return(n & mask)>0?1:0;
}

int setbit(int n, int i)
{
    int ans =n;
    int mask= (1<<i);
    return(n | mask);
}

int clearbit(int n, int i)
{
    int ans=n;
    int mask= ~(1<<i);
    return ans & mask;
}

int updatebit(int n, int i, int v)
{
    int ans= clearbit(n,i);
    int mask=v<<i;
    return (ans | mask);
}

int clearNbits(int n, int i)
{
    int ans=n;
    int mask=(-1<<i);
    return ans&mask;
}

int clearRangeofBits(int n, int i, int j)
{
    int ans=n;
    int a = clearNbits(n,i);
    int b = (1<<j)-1;
    int mask =a|b;
    return ans & mask;
}

int main()
{
    int n;
    cin>>n;
    int i;
    cin>>i;
    int j;
    cin>>j;
    cout<<clearRangeofBits(n,i,j);
}