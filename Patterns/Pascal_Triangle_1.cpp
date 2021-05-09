/* 
          1
         1   1
       1   2   1
     1   3   3   1 */
#include<iostream>
using namespace std;

int fact(int num)
{
	int factorial=1;
	for(int i=2;i<=num;i++)
	  factorial*=i;
	return factorial;
}

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			cout<<" ";
		}
		for(int k=0;k<=i;k++)
		{
			cout<<fact(i)/(fact(k)*fact(i-k))<<"  ";
		}
		cout<<endl;
	}
	return 0;
}