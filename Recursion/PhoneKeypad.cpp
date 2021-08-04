#include<iostream>
using namespace std;

char keypad[][10]={" ",".+@$","ABC","DEF","GEH","IJK","LMN","PQRS","TUV","WXYZ"};

void generateName(char *in, char *out, int i, int j )
{
    if(in[i]=='\0')
    {
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    int digit = in[i]-'0';

    // if(digit ==0)
    // {
    //     generateName(in, out, i+1,j);
    // }
    for(int k=0; keypad[digit][k]!='\0';k++)
    {
        out[j]=keypad[digit][k];
        generateName(in,out,i+1,j+1);
    }
    return;
}

int main()
{
    char in[100];
    cin>>in;
    char out[100];
    generateName(in, out, 0,0);
}