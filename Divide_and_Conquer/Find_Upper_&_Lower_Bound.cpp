/*
Find position of the last and first occurrence of a given number in a sorted array. If number does not exist then print lower and upper bound as -1.

Input Format
First line contains an integer n denoting the size of the array.
Second line contains n space separated integers denoting array elements.
Third line contains single integer Q denoting the no of queries.
Q lines follow , each containing a single integer x that is to be searched in the array.

Constraints
1 <= N <= 10^5
1 <= Q <= 100

Output Format
For each query , print the lowerbound and the upperbound for the number x in a new line each.

Sample Input
5
1 2 3 3 4
3
2
3
10
Sample Output
1 1
2 3
-1 -1
*/
#include<bits/stdc++.h>
using namespace std;

void answer(int n, int a[], int x)
{
    int lb=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            lb=i;
            break;
        }
    }
    int ub=-1;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==x)
        {
            ub=i;
            break;
        }
    }
    cout<<lb<<" "<<ub;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        answer(n, a, x);
        cout<<endl;
    }
    
}