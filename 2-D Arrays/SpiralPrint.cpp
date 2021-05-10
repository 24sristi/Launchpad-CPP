//Take as input a two-d array. Wave print it in spiral.
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
    int sr=0;
    int sc=0;
    int er=m-1;
    int ec=n-1;
    while(sr<=er && sc<=ec)
    {
        for(int i=sc;i<=ec;i++)
        {
            cout<<a[sr][i]<<" ";
        }
        sr++;
        for(int i=sr;i<=er;i++)
        {
            cout<<a[i][ec]<<" ";
        }
        ec--;
        if(er>sr){
        for(int i=ec;i>=sc;i--)
        {
            cout<<a[er][i]<<" ";
        }
        er--;
        }
        if(ec>sc){
        for(int i=er;i>=sr;i--)
        {
            cout<<a[i][sc]<<" ";
        }
        sc++;
        }
    }

    }