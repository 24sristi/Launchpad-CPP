//Given a 2D array of size N x N. Rotate the array 90 degrees clockwise.

#include<bits/stdc++.h>
using namespace std;
void rotate(int a[][1000],int n)//WITHOUT STL
{
    for(int i=0;i<n;i++)
    {
        int startcol=0;
        int endcol=n-1;
        while(startcol<endcol)
        {
            swap(a[i][startcol],a[i][endcol]);
            startcol++;
            endcol--;
        }
    }
    for(int i=0;i<n;i++)//TRANSPOSE
    {
        for (int j=0;j<n;j++)
            swap(a[i][j],a[j][i]);
    }
}

void rotate(int a[][1000],int n)//using stl
{
    for(int i=0;i<n;i++)
    {
        reverse(a[i],a[i]+n);
    }
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
            swap(a[i][j],a[j][i]);
    }
}

int main() {
	int n;
	cin>>n;
	int a[1000][1000];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	rotate(a,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<a[j][i]<<" ";
		cout<<endl;
	}

	return 0;
}