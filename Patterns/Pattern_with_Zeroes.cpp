/*Take N (number of rows), print the following pattern (for N = 5)
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
		   if(j==1 || j==i)
		     cout<<i<<" ";
		   else
		      cout<<"0"<<" ";}

		  cout<<endl;
	}
	return 0;
}