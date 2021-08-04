#include<iostream>
using namespace std;

void GenerateStrings(char *in, char *out, int i, int j)
{
    if(in[i]=='\0')
    {
        out[j]=in[i];
        cout<<out<<endl;
        return;
    }
    //rec case
    //one digit at a time
    int digit = in[i]-'0';
    char ch =digit + 'A' -1;
    out[j]=ch;
    GenerateStrings(in,out, i+1,j+1);
    //two digits at a time
    if(in[i+1]!='\0')
    {
        int secondDigit = in[i+1]-'0';
        int no = digit*10+ secondDigit;
        if(no<=26)
        {
            char ch = no+ 'A'-1;
            out[j]=ch;
            GenerateStrings(in,out,i+2,j+1);
        }
    }
    return;
}

int main()
{
    char in[100];
    cin>>in;
    char out[100];
    GenerateStrings(in,out,0,0);
}