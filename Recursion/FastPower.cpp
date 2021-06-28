#include<iostream>
using namespace std;

int power(int a, int n)
{
    if(n==0)
    {
        return 1;
    }
    if(n&1)
    {
        return a* power(a,n-1);
    }
    else
    {
        int x = power(a,n/2);
        return x*x;
    }    
}

int main()
{
    int a,n;
    cin>>a>>n;
    cout<<power(a,n);
}