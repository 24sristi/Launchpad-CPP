#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    char a[1000];
    char largest[10000];
    int len=0;
    int largestlen=0;
    cin.get();
    while(n--)
    {
        cin.getline(a,10000);
        len=strlen(a);
        if(len>largestlen)
        {
            largestlen=len;
            strcpy(largest, a);
        }
    }
    cout<<largest<<" with length="<<largestlen;
}

