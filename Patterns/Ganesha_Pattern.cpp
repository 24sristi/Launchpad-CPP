/*
Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.
*  ****
*  *
*  *
*******
   *  *
   *  *
****  * */
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	//first component
	cout<<"*";
	for(int i=1;i<=(n-3)/2;i++)
	   cout<<" ";
	for(int i=1;i<=(n+1)/2;i++)
	   cout<<"*";
	cout<<"\n";
	//second component
	for(int i=1;i<=(n-3)/2;i++)
	{
		cout<<"*";
		for(int j=1;j<=(n-3)/2;j++)
		   cout<<" ";
		cout<<"*";
		cout<<"\n";
	}
  //third component
  for(int i=1;i<=n;i++)
    cout<<"*";
  cout<<"\n";
  //fourth component
  for(int i=1;i<=(n-3)/2;i++)
	{
		for(int j=1;j<=((n-3)/2)+1;j++)
       cout<<" ";
    cout<<"*";
		for(int j=1;j<=(n-3)/2;j++)
		   cout<<" ";
		cout<<"*";
		cout<<"\n";
	}
  //fifth component
  for(int i=1;i<=(n+1)/2;i++)
	   cout<<"*";
  for(int i=1;i<=(n-3)/2;i++)
	   cout<<" ";
  cout<<"*";
	cout<<"\n";
	return 0;
}