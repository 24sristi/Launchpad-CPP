//Given a binary number ,help Von Neuman to find out its decimal representation. For eg 000111 in binary is 7 in decimal.
#include<iostream>
#include<cmath>
using namespace std;

int binary(int nos)
{
	int res=0;
	int i=0;
	while(nos!=0)
	{
		int rem=nos%10;
		res=res+(rem*pow(2,i));
		nos=nos/10;
		i++;
	}
	return res;
}

int main() {
	int n;
	cin>>n;
	int nos;
	while(n>0)
	{
		cin>>nos;
		cout<<binary(nos)<<endl;
		n--;
	}
	return 0;
}
