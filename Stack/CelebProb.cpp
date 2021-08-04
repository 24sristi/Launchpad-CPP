#include<bits/stdc++.h>
using namespace std;

int CelebrityProblem(int arr[][100],int n)
{
    stack<int>st;
    for(int i=0;i<n;i++)
    {
        st.push(i);
    }

    while(st.size()>=2)
    {
        int i= st.top();
        st.pop();
        int j=st.top();
        st.pop();
        if(arr[i][j]==1)
        {
            //i knows j, j potential
            st.push(j);
        }
        else
        {
            st.push(i);
        }
    }
    int pot=st.top();
    st.pop();
    for(int i=0;i<n;i++)
    {
        if(i!=pot)
        {
            if(arr[i][pot]==0 || arr[pot][i]==1)
            {
                return -1;
            }
        }
        return pot;
    }
}

int main()
{
    int arr[100][100];
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    if(CelebrityProblem(arr,n)==-1)
    {
        cout<<"none";
    }
    else{
        cout<<CelebrityProblem(arr,n);
    }
    
}