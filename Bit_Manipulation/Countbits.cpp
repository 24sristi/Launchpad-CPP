#include<bits/stdc++.h>
using namespace std;

int countbit1(int n)
{
    int count=0;
    while(n>0)
    {
        int last_digit=n&1;
        count+=last_digit;
        n=n>>1;
    }
    return count;
}

int countbit2(int n)
{
    int count=0;
    while (n>0)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<countbit1(n)<<endl;
    cout<<countbit2(n)<<endl;
    cout<< __builtin_popcount(n);
}
