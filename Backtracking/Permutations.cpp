#include<bits/stdc++.h>
using namespace std;

void Permute( char *in, int i)
{
    if(in[i]=='\0')
    {
        cout<<in<<", ";
        return;
    }
    for(int j=i;in[j]!='\0';j++)
    {
        swap(in[i],in[j]);
        Permute(in,i+1);
        swap(in[i],in[j]);
    }
}

int main()
{
    char in[100];
    cin>>in;
    Permute(in,0);
}