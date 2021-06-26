//https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
//

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void segregateElements(int a[],int n)
    {
        // Your code goes here
        int ans[n];
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=0)
            {
                ans[j]=a[i];
                j++;
            }
            
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                ans[j]=a[i];
                j++;
            }
            
        }
        memcpy(a, ans, sizeof(ans));
    }
};

// { Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}