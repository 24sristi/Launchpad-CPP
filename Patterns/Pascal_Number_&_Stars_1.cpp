/*
1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 * * * * * * * */
#include<iostream>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";    // added space
        }
        for(int j=0;j<2*(n-i)-1;j++)     // condition change
        {
            cout<<"*";
            cout<<" ";      // added space
        }
        cout<<endl;
    }
  
  	return 0;
}