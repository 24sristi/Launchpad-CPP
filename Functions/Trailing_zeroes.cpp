//count of trailing zeroes in n!
#include<iostream>
using namespace std;
int trailingZeroes(int n)
{
    int ans=0;
    for(int d=5; n/d>=1;d=d*5)
    {
        ans+=n/d;
    }
    return ans;
}

int main()
{
    long long int n;
    cin>>n;
    cout<<trailingZeroes(n);
}
