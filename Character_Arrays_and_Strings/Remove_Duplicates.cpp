#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(char a[])
{
    int n=strlen(a);
    if(n==0)
        return;
    int i=0;
    int j=i+1;
    while(j<n)
    {
        if(a[i]==a[j])
            j++;
        else
        {
            i++;
            a[i]=a[j];
            j++;
        }
    }
    a[i+1]='\0';
}

int main()
{
    char a[100];
    cin>>a;
    removeDuplicates(a);
    cout<<a;
}
