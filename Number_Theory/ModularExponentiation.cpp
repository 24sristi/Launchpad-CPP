#include<bits/stdc++.h>
using namespace std;

int modularexponent(int a, int n, int b) // takes O(logn) time
{
    int ans=1;
    while(n>0)
    {
        int last_digit=n&1;
        n=n>>1;
        if(last_digit==1)
        {
            ans=ans*a%b;
        }
        a=a*a%b;
    }
    return ans;
}

int main()
{

        //take input
        int a,n,b;
        cin>>a>>n>>b;

        //print output
        cout<<modularexponent(a,n,b)<<endl;
}