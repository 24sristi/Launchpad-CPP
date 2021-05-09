/*Take the following as input.
A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.*/
#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	cin>>n1>>n2;
	int count=1,i=1;
	int ans;
	while(count<=n1)
	{
		ans=(3*i)+2;
		
		if(ans%n2!=0){
			cout<<ans<<endl;
			count++;
		}
		i++;
	}
}