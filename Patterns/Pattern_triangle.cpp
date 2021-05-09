/*Take N (number of rows), print the following pattern (for N = 4).
                      1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4*/
#include<iostream>
using namespace std;
int main() {
	int num,j;
   cin>>num;
   int n=1;
   for(int i=1;i<=num;i++)
   {
       for(j= 1;j<=num-i;j++)
         cout<<"\t";//use tabs
       for(j=1;j<=i;j++)
         cout<<n++<<"\t";//use tabs
       for(j=i-1;j>=1;j--)
         cout<<(n-- -2)<<"\t"; //use tabs and added -2
    cout<<endl;
   }

	return 0;
}