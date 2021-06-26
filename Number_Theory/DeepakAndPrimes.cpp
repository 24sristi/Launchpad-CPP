#include <iostream>
using namespace std;

 int p[10000055]={0};

void prime_seive()
{
 for(int i=3;i<=10000005;i+=2)
    {
        p[i]=1;
    }
    for(int i=3;i*i<=10000005;i+=2)
    {
        if(p[i]==1)
        {
            for(int j=i*i;j<=10000005;j+=i)
            {
                p[j]=0;
            }
        }
    }
    p[2]=1;
    p[1]=p[0]=0;
}
int main() {
    int n;
    cin>>n;
   
    prime_seive();
    int cnt=0,i=2;
    while(cnt<n)
    {
        if((p[i]==1))
        {
            cnt++;
        }
        i++;
    }
    cout<<i-1;
return 0;

}
