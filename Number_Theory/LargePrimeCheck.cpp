#include<bits/stdc++.h>
using namespace std;

const int n = 10000000;
bitset<10000005>b;
vector<int>primes;

void sieve()
{
    b.set();
    b[0]=b[1]=0;
    for(long long int i=2;i<=n;i++)
    {
        if(b[i])
        {
            primes.push_back(i);
            for(long long int j=i*i;j<=n;j=j+i)
            {
                b[j]=0;
            }
        }
    }
}

bool isPrime(long long int no)
{
	if(no<=n)
    {
        if(b[no]==1)
            return true;
        else
            return false;
    }
    for (long long int i = 0; primes[i]*(long long)primes[i] <= no; i++)
    {
        if(no%primes[i]==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    sieve();
    // long long int num;
    // cin>>num;
    if(isPrime(3)){
        cout<<"prime";
    }
    else
    {
        cout<<"not prime";
    }
}