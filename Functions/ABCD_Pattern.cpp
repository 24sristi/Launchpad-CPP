/*
ABCDE
ABCD
ABC
AB
A
*/
#include <iostream>
using namespace std;
void ABCDPattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        char alphabet='A';
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<alphabet;
            alphabet++;
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cin>>n;
    ABCDPattern(n);
}
