//FIBONACCI SERIES OF N DIGITS
#include<iostream>
using namespace std;
void fib(int n)
{
    int a=0;
    int b=1;
    cout<<a<<" "<<b;
    int c;
    for(int i=0;i<=n-2;i++)
    {
        c=a+b;
        cout << " "<<c;
        a=b;
        b=c;
    }
}

int main()
{
    int n;
    cin>>n;
    fib(n);
}
