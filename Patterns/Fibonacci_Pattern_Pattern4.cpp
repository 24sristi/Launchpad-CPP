/*Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34*/
#include<iostream>
using namespace std;

void fib(int f[], int N) 
{ 
    f[0]=0;
	f[1] = 1; 
    f[2] = 1; 
      
    for (int i = 3; i <= N; i++) 
        f[i] = f[i - 1] + f[i - 2]; 
} 

int main() {
	int n;
	cin>>n;
	int N = n*(n+1)/2; 
    int f[N + 1]; 
    fib(f, N);
	int fibonum=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		cout<<f[fibonum++]<<" ";
	 
	 cout<<endl;
	}
	
	return 0;
}
