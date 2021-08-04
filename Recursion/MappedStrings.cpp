#include<iostream>
#include<cstring>
using namespace std;

void mappedString(char *in, char *out, int i, int j,int n)
{
    if(in[i]=='\0')
    {
        out[j]=in[i];
        cout<<out<<endl;
        return;
    }
    if(in[i]=='0')
    {
        mappedString(in,out,i+1,j,n);
    }
    if(i == n - 1 and in[i] == '0') return;
    
    if(i == n - 1){
        int a = in[i] - '0';
        out[j]=char(64+a);
        mappedString(in,out,i+1,j+1,n);
    }
    else
    {
        int digit = in[i]-'0';
        out[j]=char(64+digit);
        mappedString(in,out, i+1,j+1,n);
        int digit2 = (10*digit)+(in[i+1]-'0');
        if(digit2<=26)
        {
            out[j]=char(64+digit2);
            mappedString(in,out,i+2,j+1,n);
        }
    }
}

int main()
{
    char input[100];
    cin>>input;
    char output[100];
    int n= strlen(input);
    mappedString(input,output,0,0,n);
}