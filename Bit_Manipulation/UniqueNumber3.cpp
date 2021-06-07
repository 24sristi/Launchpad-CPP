#include<iostream>
using namespace std;

int main()
{
    int n,no;
    cin>>n;
    int cnt[64]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>no;
        int j=0;
        while(no>0)
        {
            int last_digit=no&1;
            cnt[j]+=last_digit;
            no=no>>1;
            j++;
        }
    }
    int ans=0;
    int p=1;
    for(int i=0;i<64;i++)
    {
        cnt[i]=cnt[i]%3;
        ans+=(cnt[i]*p);
        p*=2;
    }
    cout<<ans<<endl;
    
}