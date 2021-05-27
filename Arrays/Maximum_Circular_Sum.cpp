#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			sum+=a[i];
		}
		int curr_max=0; 
    int maxtillnow= INT_MIN;
    int curr_min=0;
    int mintillnow=INT_MAX;
		for(int i=0;i<n;i++)
		{
			curr_max+=a[i];
			if(curr_max<0)
			{
				curr_max=0;
			}
			maxtillnow=max(curr_max,maxtillnow);
		}
	for(int i=0;i<n;i++)
    {
      curr_min+=a[i];
      if(curr_min>0)
      {
        curr_min=0;
      }
      mintillnow=min(curr_min,mintillnow);
    }
	int wrappedsum=sum-mintillnow;
	cout<<max(wrappedsum,maxtillnow)<<endl;

	}
}