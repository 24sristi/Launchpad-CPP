//Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1’s.

#include<iostream>
using namespace std;

int Stringcnt(int n)
{
    if(n==0 || n==1)
    {
        return n+1;
    }
    return Stringcnt(n-1)+Stringcnt(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<Stringcnt(n);
}