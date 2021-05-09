// Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.
 
#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int p = m>n?m:n;
    int c[p];
    int i=n-1;
    int j=m-1;
    int k=p-1;
    int carry=0;
    while(k>=0)
    {
        int d=carry;
        if(i>=0)
        {
            d+=a[i];
        }
        if(j>=0)
        {
            d+=b[j];
        }
        carry=d/10;
        d=d%10;
        c[k]=d;
        i--;
        j--;
        k--;
    }
    if(carry!=0)
    {
        cout<<carry<<", ";
    }
    for(int i=0;i<p;i++)
    {
        cout<<c[i]<<", ";
    }
    cout<<"END";
    return 0;
}
// INPUT:               OUTPUT: 3, 5, 5, 9, 6, END
// 4
// 1 0 2 9
// 5
// 3 4 5 6 7 
