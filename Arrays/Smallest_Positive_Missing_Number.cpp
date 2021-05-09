//ques: https://drive.google.com/drive/folders/1AeAex8bq4KTGBi5iaiX5cu4LWh7gDtZl

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    const int N=1e6+2;
    bool b[N];
    for(int i=0;i<N;i++)
    {
        b[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b[a[i]]=1;
        }
    }
    int missingNo=-1;
    for(int i=1;i<N;i++)
    {
        if(b[i]==0)
        {
            missingNo=i;
            break;
        }
    }
    cout<<missingNo;
}
