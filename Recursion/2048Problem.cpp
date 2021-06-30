#include<bits/stdc++.h>
using namespace std;

string words[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight","nine"};


void PrintSpelling(int n)
{
    if(n==0)
    {
        return;
    }
    PrintSpelling(n/10);
    cout<<words[n%10]<<" ";
}

int main()
{
    int n;
    cin>>n;
    PrintSpelling(n);
}