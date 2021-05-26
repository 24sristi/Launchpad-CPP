#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ROTATE STL
    int arr[]={1, 2 ,3 , 4, 5};
    int n = sizeof(arr)/sizeof(int);
    rotate(arr, arr+2, arr+n);
    for(int i= 0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
    //ROTATE A VECTOR
    vector<int>v{1, 2, 3, 4, 5};
    rotate(v.begin(), v.begin()+2, v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    cout<<endl;
    //NEXT PERMUATATION STL GIVES NEXT LEXIGROPHICALLY BIGGER ORDER

    next_permutation(v.begin(), v.end());
    for(int x : v)
    {
        cout<<x;
    }
}