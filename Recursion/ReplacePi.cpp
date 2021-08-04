#include<bits/stdc++.h>
using namespace std;

void ReplacePi(char s[], int i)
{
    if(s[i]=='\0' || s[i+1]=='\0')
    {
        return;
    }
    if(s[i]=='p' && s[i+1]=='i')
    {
        //shift and replace
        int j=i+2;
        while(s[j]!='\0')
        {
            j++;
        }
        while(j>=i+2)
        {
            s[j+2]=s[j];
            j--;
        }
        s[i]='3';
        s[i+1]='.';
        s[i+2]='1';
        s[i+3]='4';
        ReplacePi(s,i+4);
    }
    else{
        ReplacePi(s,i+1);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    char a[1000];
    cin>>a;
    ReplacePi(a,0);
    cout<<a<<endl;   
    }
}