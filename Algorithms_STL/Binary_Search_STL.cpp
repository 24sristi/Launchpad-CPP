//Binary_Search STL, use it to check if an element is present or not, when the array is sorted, it returns bool value and take O(logn) time
//lower_bound() is used to find index of first element >= key
//upper_bound() is used to find index of first element >key

#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={10, 13, 13, 13, 19, 72, 92};
    int n= sizeof(arr)/sizeof(int);
    int key =13;
    bool check = binary_search(arr, arr+n,key);
    if(check)
    {
        cout<<"present";
    } 
    else
    {
        cout<<"not present";
    }
    cout<<endl;
    int up = upper_bound(arr,arr+n,key) - arr;
    int lo = lower_bound(arr,arr+n,key) - arr;

    cout<<"lower bound of key: "<<lo<<endl;
    cout<<"upper bound of key: "<<up<<endl;
    cout<<"No. of occurrence of key in sorted array O(logn): "<<up - lo;    
}
/*
OUTPUT:
present
lower bound of key: 1
upper bound of key: 4
No. of occurrence of key in sorted array O(logn): 3
*/