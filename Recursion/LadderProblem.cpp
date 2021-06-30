#include<iostream>
using namespace std;

int LadderWays(int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    return LadderWays(n-1)+LadderWays(n-2)+LadderWays(n-3);
}

int main()
{
    int n;
    cin>>n;
    cout<<LadderWays(n);
}