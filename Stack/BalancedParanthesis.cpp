#include<iostream>
#include<stack>
using namespace std;

bool isValid(string str)
{
    stack<char>s;
    for(int i=0;str[i]!='\0';i++)
    {
        char ch = str[i];
        if(ch=='(' || ch=='{' || ch=='[')
        {
            s.push(ch);
        }
        else if(ch==')')
        {
            
            if(s.empty() || s.top()!='(')
            {
                return false;
            }
            s.pop();
        }
        else if(ch=='}')
        {
            if(s.empty() || s.top()!='{')
            {
                return false;
            }
            s.pop();
        }
        else if(ch==']')
        {
            if(s.empty() || s.top()!='[')
            {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}

int main()
{
    string s;
    getline(cin,s);
    if(isValid(s))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}