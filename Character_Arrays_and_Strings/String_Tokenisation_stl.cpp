#include<bits/stdc++.h>
using namespace std;

int main() {
    char s[100]="Hello people of this world";
    char *ptr= strtok(s," ");//divides into tokens
    cout<<ptr<<endl;
    while(ptr!=NULL)
    {
        ptr=strtok(NULL," ");
        cout<<ptr<<endl;
    }
}
