/*
Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

Input Format
Enter a number N , add N more numbers

Constraints
None

Output Format
Display the Boolean result

Sample Input
4
1
2
2
1
Sample Output
true
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i=0;
	int j=n-1;
	while(i<=j)
	{
		if(a[i]!=a[j])
		{
			cout<<"false";
			return 0;
		}
		i++;
		j--;
	}
	cout<<"true";
}