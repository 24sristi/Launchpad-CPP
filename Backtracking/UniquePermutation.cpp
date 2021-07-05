#include<bits/stdc++.h>
using namespace std;

void Permute( char in[], int i, set<string> &s)
{
    if(in[i]=='\0')
    {
        string t(in);
        s.insert(t);
        // cout<<in<<", ";
        return;
    }
    for(int j=i;in[j]!='\0';j++)
    {
        swap(in[i],in[j]);
        Permute(in,i+1, s);
        swap(in[i],in[j]);
    }
}

int main()
{
    char in[100];
    cin>>in;
    set<string>s;
    Permute(in,0,s);
    
    for (auto str : s)
    {
        cout<<str<<", ";
    }
    
}