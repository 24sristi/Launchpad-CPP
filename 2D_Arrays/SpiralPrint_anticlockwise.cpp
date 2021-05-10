//Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.
/*Sample Input:
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output:
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
*/
#include<iostream>
using namespace std;
int main() {
  int a[10][10],M,N;
  cin>>M>>N;
  for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
      cin>>a[i][j];
    }
  }
  int fr,lr,fc,lc;
  fr=0,fc=0;
  lr=M-1,lc=N-1;
  while(fr<=lr && fc<=lc){
    for(int i=fr;i<=lr;i++){
      cout<<a[i][fc]<<", ";
    }
    fc++;
    if(lr>fr){
    for(int j=fc;j<=lc;j++){
      cout<<a[lr][j]<<", ";
    }
    lr--;}
    if(lc>fc){
    for(int x=lr;x>=fr;x--){
      cout<<a[x][lc]<<", ";
    }
    lc--;}
    for(int y=lc;y>=fc;y--){
      cout<<a[fr][y]<<", ";
    }
    fr++;
  }
 cout<<"END";
  
	return 0;
}