//Given an array arr[] of size N. The task is to find the first repeating element in an
//array of integers, i.e., an element that occurs more than once and whose index of
//first occurrence is smallest.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int N=1e6+2;
    int b[N];
    int minidx=INT_MAX;
    for(int i=0;i<N;i++)
    {
        b[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        if(b[a[i]]!=-1){
        minidx=min(minidx,b[a[i]]);}
        else{
        b[a[i]]=i;}
    }
    if(minidx==INT_MAX){//no repeating elements
	   cout<<”-1”;}
    else{
    cout<<minidx+1;}
}
