//Due to an immense rise in Pollution, Kejriwal is back with the Odd and Even Rule in Delhi. The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to check every car for the above criteria can't be done by the Delhi Police. You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?
#include<iostream>
using namespace std;
int main(){
	int n,no,last; 
	cin>>n; 
	for(int j =0; j<n;j++){ 
		int sume=0;
		int sumo=0; 
		cin>>no; 
		for(int i=0;no>0;i++){ 
			last = no%10;
			if(last%2==0) 
				sume =sume+last;
			else
				sumo=sumo+last; 
			no = no/10;
		} 
		if( (sume%4==0)  || (sumo%3==0)){ 
			cout<<"Yes"<<endl; 
		} 
		else{ 
			cout<<"No"<<endl; 
		} 
	}
}