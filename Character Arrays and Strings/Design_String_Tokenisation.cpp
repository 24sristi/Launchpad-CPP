#include<bits/stdc++.h>
using namespace std;

char *mystrtok(char *str, char delim)
{
    static char *input =NULL;
    if(str!=NULL)
    {
        input=str;
    }
    //base case
    if(input==NULL)
    {
        return NULL;
    }
    char *output = new char[strlen(input)-1];
    int i=0;
    for(;input[i]!='\0';i++)
    {
        if(input[i]!=delim)
        {
            output[i]=input[i];
        }
        else
        {
            output[i]='\0';
            input=input+i+1;
            return output;
        }
    }
    //corner case
    output[i]='\0';
    input=NULL;
    return output;
}

int main() {
    char s[100]="Hello people of this world";
    char *ptr= mystrtok(s,' ');//divides into tokens
    cout<<ptr<<endl;
    while(ptr!=NULL)
    {
        ptr=mystrtok(NULL,' ');
        cout<<ptr<<endl;
    }
}
