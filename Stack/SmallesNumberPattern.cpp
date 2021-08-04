#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    stack<int>st;
    int num=1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='d')
        {
            st.push(num);
            num++;
        }
        else
        {
            st.push(num);
            num++;
            while(!st.empty())
            {
                cout<<st.top();
                st.pop();
            }
        }
    }
    st.push(num);
    while(!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
}