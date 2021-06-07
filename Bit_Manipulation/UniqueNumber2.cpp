#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        ans=ans^a[i];
    }
    int temp=ans;
    int pos=0;
    while((temp&1)==0)
    {
        n=n>>1;
        pos++;
    }
    int mask= 1<<pos;
    int x=0, y=0;
    for (int i = 0; i < n; i++)
    {
        if((a[i] & mask)>0)
        {
            x=x^a[i];
        }
    }
    y=ans^x;
    cout<<min(x,y)<<" "<<max(x,y);
    
    
}