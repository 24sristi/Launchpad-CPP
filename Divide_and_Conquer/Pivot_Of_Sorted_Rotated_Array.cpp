/*
You are given a sorted but rotated array. You need to fine the index of the pivot element of the array where pivot is that element in the array which is greater than its next element and divides the array into two monotonically increasing halves.

Input Format
The first line denotes N - the size of the array. The following N lines each denote the numbers in the array.

Constraints
Output Format
Output the index of the pivot of the array.

Sample Input
5
4
5
1
2
3
Sample Output
1
*/

#include<bits/stdc++.h>
using namespace std;

int FindPivot(int a[], int n)
{
    int s=0;
    int e=n-1;
    if(e<s)
    {
        return -1;
    }
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]>a[mid+1] && mid<e)
        {
            return mid;
        }
        else if(a[mid]<a[mid-1] && mid>s)
        {
            return mid-1;
        }
        else if(a[s]>=a[mid])
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    
}