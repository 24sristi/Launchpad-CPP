#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //take input
        int i,j;
        cin>>i>>j;
        int count=0;
        for(int k=i;k<=j;k++)
        {
            count+= __builtin_popcount(k);
        }
        cout<<count<<endl;

        //print output
    }
}