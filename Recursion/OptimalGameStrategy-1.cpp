#include<iostream>
using namespace std;
#define int long long int

int a[40];

int OptimalGame(int i, int j)
{
    if(i>j)
    {
        return 0;
    }
    int choosefirst = a[i]+min(OptimalGame(i+1,j-1),OptimalGame(i+2,j));
    int chooselast = a[j]+min(OptimalGame(i,j-2),OptimalGame(i+1,j-1));

    int maxwin = max(choosefirst,chooselast);
    return maxwin;
}

signed main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<OptimalGame(0,n-1);
    
}