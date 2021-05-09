#include <iostream>
using namespace std;
int BinarytoDecimal(int n)
{
    int ans=0;
    int multiplier=1;
    while(n>0)
    {
        int lastdigit=n%10;
        ans+=lastdigit*multiplier;
        multiplier*=2;
        n/=10;
    }
    return ans;
}
int main() {
    long long int n;
    cin>>n;
    cout<<BinarytoDecimal(n);
}
