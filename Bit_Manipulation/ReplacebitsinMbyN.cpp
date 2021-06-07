#include<iostream>
using namespace std;

int clearRangeofBits(int n, int i, int j)
{
    int ans=n;
    int a = -1 << (j+1);
    int b = (1<<i)-1;
    int mask =a|b;
    return ans & mask;
}

int calculate(int n, int m, int i, int j)
{
    int ans = clearRangeofBits(n,i,j);
    int mask=m<<i;
    return ans|mask;
}

int main()
{
    int n,m;
    cin>>n>>m;
    int i,j;
    cin>>i>>j;
    cout<<calculate(n,m,i,j);

}