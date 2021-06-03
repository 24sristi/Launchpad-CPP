#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int a[], int n)
{
    int minim=0;
    for (int i = 0; i < n-1; i++)
    {
        minim=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minim])
            {
                minim=j;
            }
        }
        swap(a[minim],a[i]);
    }
    
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
    SelectionSort(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    
}