//Take as input a two-d array. Wave print it row-wise.
#include<iostream>
using namespace std;
int main() {
	int row,col;
    cin>>row>>col;
    int a[row][col];
    for(int i=0;i<row;i++)
    {
      for(int j=0;j<col;j++)
         cin>>a[i][j];
    }
        for(int j=0;j<m;j++)
    {
        if(j%2==0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
        if(j%2!=0)
        {
            for(int i=n-1;i>=0;i--)
            {
                cout<<a[i][j]<<" ";
            }
        }
        // cout<<endl;
    }

	cout<<"END";
    }