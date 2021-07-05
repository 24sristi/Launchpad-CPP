#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k;
	cin>>k;
    sort(a,a+n);
	int s=0;
	int e=n-1;
	while(s<=e)
	{
        if(a[s]+a[e]==k)
		{
			cout<<a[s]<<" and "<<a[e]<<endl;
			s++;
			e--;
		}
		else if(a[s]+a[e]<k)
		{
			s++;
		}
		else{
			e--;
		}
	}
	return 0;
}