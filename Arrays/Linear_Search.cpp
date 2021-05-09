#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            cout<<"Item found!";
            break;
        }
    }
    if(i==n)
      cout<<"item not found";
}
