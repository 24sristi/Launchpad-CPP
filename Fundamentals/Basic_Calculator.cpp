/*Write a program that works as a simple calculator.

1.It reads a character (ch)
2.If ch is among '+', '-', '*', '/' or '%' it furthur takes two numbers (N1 and N2 as input). It then performs appropriate appropriate operation between numbers and print the number.
3.If ch is 'X' or 'x', the program terminates.
4.If ch is any other character, the program should print 'Invalid operation. Try again.' and seek inputs again (starting from character).
*/
#include<iostream>
using namespace std;
int main() {
	char ch;
	int N1, N2;
	do{
		cin>>ch; 
		if(ch=='+'){
           cin>>N1>>N2;
		   cout<<N1+N2<<endl;
        }
		else if(ch=='-'){
            cin>>N1>>N2;//add here
		   cout<<N1-N2<<endl;
        }
		else if(ch=='*'){
            cin>>N1>>N2;//add here
		   cout<<N1*N2<<endl;
        }
		else if(ch=='/'){
           cin>>N1>>N2;//add here
		   cout<<N1/N2<<endl;
        }
		else if(ch=='%'){
           cin>>N1>>N2;//add here
		   cout<<N1%N2<<endl;
        }
		else if(ch!='x' && ch!='X')//updated this 
		   cout<<"Invalid operation. Try again."<<endl;
	}while(ch!='x' && ch!='X'); //updated this && instead of ||
	return 0;
}