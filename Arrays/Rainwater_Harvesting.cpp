/*Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

INPUT:
10
0 2 1 3 0 1 2 1 2 1

OUTPUT:
5
*/

#include <iostream>
using namespace std;
long long rainwatertrap(int h[],int n)
 {

    int leftmost[n];
    leftmost[0]=h[0];
    for(int i=1;i<n;i++)
    {
        leftmost[i]=max(leftmost[i-1],h[i]);
    }
    int rightmost[n];
    rightmost[n-1]=h[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rightmost[i]=max(h[i],rightmost[i+1]);
    }
    long long total_water=0;
    for(int i=0;i<n;i++)
    {
        int water_at_building=min(leftmost[i],rightmost[i])-h[i];
        total_water+=water_at_building;
    }
    return total_water;

}
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int h[n];
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    cout<<rainwatertrap(h,n)<<endl;
    }
    return 0;
}