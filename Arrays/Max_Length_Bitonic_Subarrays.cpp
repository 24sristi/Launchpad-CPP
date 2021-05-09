/*You are provided n numbers of array. You need to find the maximum length of bitonic subarray. A subarray A[i ... j] is biotonic if there is a k with i <= k <= j such that A[i] <= A[i + 1] ... <= A[k] >= A[k + 1] >= .. A[j - 1] > = A[j] i.e subarray is first increasing and then decreasing or entirely increasing or decreasing.*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int inc[n];
		inc[0]=1;
		for(int i=1;i<n;i++)
		{
			if(a[i]>=a[i-1])
			   inc[i]=inc[i-1]+1;
			else
			   inc[i]=1;
		}
		int dec[n];
		dec[n-1]=1;
		for(int i=n-2;i>=0;i--)
		{
			if(a[i]>=a[i+1])
			   dec[i]=dec[i+1]+1;
			else
			   dec[i]=1;
		}
		int ans=INT_MIN;
		for(int i=0;i<n;i++)
		{
			ans=max(ans,inc[i]+dec[i]-1);
		}
		cout<<ans<<endl;

	}
	return 0;
}

//inc array: if(a[i]<a[i-1]) inc[i]+=inc[i-1] else inc[i]=1
//dec array
//max(inc[i]+dec[i]+1,ans)