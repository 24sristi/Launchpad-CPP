//Given a number N (denoting one of the legs of the triangle), Print its Pythagoras pair in increasing order if they exist. Otherwise, print "-1".
#include <iostream>
using namespace std;
int main() {
    long long int x;
	cin>>x;
    if(x<3)cout<<"-1";
	else if(x%2==0){
		cout<<((x*x)/4)-1<<" ";
        cout<<((x*x)/4)+1<<endl;
	}
	else{
		cout<<(x*x-1)/2<<" ";
		cout<<(x*x+1)/2<<endl;
	}
    return 0;
}