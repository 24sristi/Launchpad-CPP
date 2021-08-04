#include<iostream>
using namespace std;

void movex(char* inp, int i){
if(inp[i]=='\0'){
return;
}
if(inp[i]!='x') cout<<inp[i];
movex(inp,i+1);
if(inp[i]=='x')cout<<inp[i];
}

int main() {
char ch[1005];
cin>>ch;
movex(ch,0);
return 0;
}

