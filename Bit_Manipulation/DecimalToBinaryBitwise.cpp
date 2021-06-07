#include<bits/stdc++.h>
using namespace std;

int DecimalToBinary(int n)
{
    int ans=0;
    int power=1;
    while (n>0)
    {
        int last_digit=(n&1);
        n=n>>1;
        ans+=(power*last_digit);
        power*=10;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //take input
        int n;
        cin>>n;
        //print output
        cout<<DecimalToBinary(n)<<endl;
    }
}