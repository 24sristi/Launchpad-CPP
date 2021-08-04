#include<bits/stdc++.h>
using namespace std;

bool DuplicateBracket (char* str)
{
    stack<char>st;
    for(int i=0;str[i]!='\0';i++)
    {
        char ch= str[i];
        if(ch==')')
        {
            if(st.top()=='(')
            {
                return true;
            }
            else
            {
                while(!st.empty() && st.top()!='(')
                {
                    st.pop();
                }
                st.pop();
            }
        }
        else
        {
            st.push(ch);
        }
    }
    return false;
}

int main()
{
    char str[10000];
    cin>>str;
    if(DuplicateBracket(str))
    {
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}