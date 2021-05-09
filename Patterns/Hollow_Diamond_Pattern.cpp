/*Take N (number of rows), print the following pattern (for N = 5).
    * * * * *
     * *   * *
     *       *
     * *   * *
     * * * * *  */
#include <iostream>
using namespace std;

int main(){
	
	int n,k=0;
	
	// cout<<"Enter the number " <<endl; //acc to question
	cin >>n;
	for (int i=1;i<=n;i++){ //did i<=n here
		  int center=(n+1)/2;//added this
		  i<=center? k++:k--; //did i<=center here
		
		for (int j=1;j<=n;j++){//did j<=n here
			
			if (j<=center-k+1 or j>=center+k-1){//replaced center here
			cout << "*\t" ;//acc to question
		}
		 else {
		 	cout<< "\t" ;//acc to question
		 }
	}
		cout <<endl;
	}
	return 0;
}