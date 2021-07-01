#include<iostream>
using namespace std;

void BracketGenerate(int n, int i, char *out, int countopen, int countclose)
{
    if(i==2*n)
    {
        out[i]='\0';
        cout<<out<<endl;
        return;
    }
    //opening bracket
    if(countopen<n)
    {
        out[i]='(';
        BracketGenerate(n,i+1,out,countopen+1, countclose);
    }
    if(countopen>countclose)
    {
        out[i]=')';
        BracketGenerate(n,i+1,out,countopen,countclose+1);
    }
}

int main()
{
    int n;
    cin>>n;
    char out[100];
    BracketGenerate(n,0,out,0,0);
}