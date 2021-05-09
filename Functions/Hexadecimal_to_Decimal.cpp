#include <iostream>
using namespace std;
int hexadecimaltoDecimal(string s)
{
    int ans=0;
    int multiplier=1;
    int n=s.size();
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            ans+=(s[i]-'0')*multiplier;
        }
        else if(s[i]>='A' && s[i]<='F')
        {
            ans+=(s[i]-'A'+10)*multiplier;
        }
        multiplier*=16;
    }
    return ans;
}
int main() {
    string n;
    cin>>n;
    cout<<BinarytoDecimal(n);
}
