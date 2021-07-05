#include <bits/stdc++.h>
using namespace std;
void tripletSum(int arr[], int N, int S){
	sort(arr,arr+N);
	for(int i=0;i<N;i++){
		int l = i+1;
		int r = N-1;
		while(l<r){
			int mySum = arr[i] + arr[l] + arr[r];
			if(mySum==S){
				cout<<arr[i]<<", "<<arr[l]<<" and "<<arr[r]<<endl;
				l++;
				r--;
			}
			else if(mySum>S){
				r--;
			}
			else if(mySum<S){
				l++;
			}
		}
	}
}
int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    tripletSum(a,n,k);
}
