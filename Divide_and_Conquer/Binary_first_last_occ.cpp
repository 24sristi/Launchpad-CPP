#include<bits/stdc++.h>
using namespace std;

int first_occurrence(int arr[], int n, int key) // to find the first occurrence (lower bound)
{
    int s=0;
    int l=n-1;
    int ans;
    while(s<=l)
    {
        int mid =(s+l)/2;
        if(arr[mid]==key)
        {
            ans = mid;
            l=mid-1; // make it keep going even when found
        }
        else if(arr[mid]>key)
        {
            l=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}

int last_occurrence(int arr[], int n, int key)
{
    int s=0;
    int l=n-1;
    int ans;
    while(s<=l)
    {
        int mid =(s+l)/2;
        if(arr[mid]==key)
        {
            ans = mid;
            s=mid+1;
        }
        else if(arr[mid]>key)
        {
            l=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}

int main()
{
    int arr[] ={1, 1, 5, 7, 10, 10, 10, 13, 15, 18, 20, 24};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<first_occurrence(arr, n, key)<<endl;
    cout<<last_occurrence(arr, n, key);
}