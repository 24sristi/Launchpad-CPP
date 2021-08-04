#include<bits/stdc++.h>
using namespace std;

vector<string> keypad = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

vector<string> names = {
    "prateek", "sneha", "deepak", "arnav", "shikha", "palak",
    "utkarsh", "divyam", "vidhi", "sparsh", "akku"};

void phoneKeypad(string in, string out)
{
    if(in.size()==0)
    {
        for (string s : names)
        {
            if(s.find(out)!=s.npos)
            {
                cout<<s<<endl;
            }
        }
        
    }
    
    int digit = in[0]-'0';
    string left = in.substr(1);
    string code = keypad[digit];
    for(int i=0;i<code.length();i++)
    {
        out=out+code[i];
        phoneKeypad(left,out);
    }
}


int main()
{
    string in;
    cin>>in;
    string out;
    phoneKeypad(in,out);
}