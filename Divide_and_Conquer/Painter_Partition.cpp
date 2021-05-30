/*
You have to paint N boards of length {A0, A1, A2, A3 … AN-1}. There are K painters available and you are also given how much time a painter takes to paint 1 unit of board. You have to get this job done as soon as possible under the constraints that any painter will only paint contiguous sections of board. Return the ans % 10000003

Input Format
First line contains three space seperated integers N,K and T ,where
N = Size of array,
K = No of painters available ,
T = Time taken to print each board by one painter
Next line contains N space seperated positive integers denoting size of N boards.

Constraints
1<=N<=100000
1<=K<=100000
1<=T<=1000000
1<=Li<=100000

Output Format
Return minimum time required to paint all boards % 10000003.

Sample Input
2 2 5
1 10
Sample Output
50
Explanation
The first painter can paint the first board in 5 units of time and the second painter will take 50 units of time to paint the second board. Since both can paint simultaneously , the total time required to paint both the boards is 50.

*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int

bool isFeasible(int boards[], int n, int k, int mid)
{
    int sum=0, painters=1;
    for (int i = 0; i < n; i++)
    {
        sum+=boards[i];
        if(sum>mid)
        {
            sum=boards[i];
            painters++;
            if(painters>k)
            {
                return false;
            }
        }
    }
    return true;
}

signed main()
{
    int n, k, t;
    cin>>n>>k>>t;
    int boards[n];
    int total;
    int maxim=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>boards[i];
        boards[i]*=t;
        maxim=max(maxim,boards[i]);
        total+=boards[i];
    }
    int s=maxim;
    int e=total;
    int ans=s;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(isFeasible(boards, n, k, mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        
    }
    cout<<ans% 10000003;
    
}
