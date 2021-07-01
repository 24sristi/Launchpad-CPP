#include<iostream>
using namespace std;

void generate_subsequence(char *a, char *out, int i, int j)
{
    if(a[i]=='\0')
    {
        out[j]=a[i];
        cout<<out<<endl;
        return;
    }
    //include
    out[j]=a[i];
    generate_subsequence(a,out,i+1,j+1);
    //exclude
    generate_subsequence(a,out, i+1,j);
}

int main()
{
    char input[]="abc";
    char out[100];
    generate_subsequence(input,out, 0,0);

}