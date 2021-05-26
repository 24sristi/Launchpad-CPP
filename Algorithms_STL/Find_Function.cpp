//FIND STL, use it to find the index of an element when the array is not sorted

#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={10, 13, 19, 72, 92};
    int n= sizeof(arr)/sizeof(int);
    int key =13;
    auto it =find(arr, arr+n, key);
    int index = it - arr;
    if(index==n)
    {
        cout<<"key not found";
    }
    else
    {
        cout<<"key found at "<<index;
    }
}
