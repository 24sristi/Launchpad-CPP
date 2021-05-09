/*Take the following as input.
Minimum Fahrenheit value
Maximum Fahrenheit value
Step
Print as output the Celsius conversions. Use the formula C = (5/9)(F - 32) E.g. for an input of 0, 100 and 20 the output is
0 -17
20 -6
40 4
60 15
80 26
100 37*/
#include<iostream>
using namespace std;

int main()
{
	int minf,maxf,step;
	cin>>minf>>maxf>>step;
	int f= minf;
	int c;

	while(f<=maxf)
	{
		c=(5*(f-32))/9;
		cout<<f<<" "<<c<<endl;
		f=f+step;
	}
}