#include<iostream>
using namespace std;

int FriendPairs(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }
    return FriendPairs(n-1)+(n-1)*FriendPairs(n-2);
}
int main()
{
    int n;
    cin>>n;
    cout<<FriendPairs(n);
}