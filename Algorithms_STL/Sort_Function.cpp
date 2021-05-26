//sort stl uses comparators,

#include <bits/stdc++.h>
using namespace std;

bool compare1(int a, int b)
{
    return a<b;
}

bool compare2(int a, int b)
{
    return b<a;
}

int main() {
    int arr[]={13, 132, 1, 41, 112, 94, 5};
    int n= sizeof(arr)/sizeof(int);
    sort(arr, arr+n, compare1);
    for(int i=0;i<n;i++)//ascending order
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr2[]= {13, 132, 1, 41, 112, 94, 5};
    int m= sizeof(arr2)/sizeof(int);
    sort(arr2, arr2+m, compare2);
    for(int i=0;i<m;i++)//descending order
    {
        cout<<arr2[i]<<" ";
    }
}
