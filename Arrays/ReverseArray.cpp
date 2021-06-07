// https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends

string reverseWord(string str){
    int s=0;
    int e= str.length()-1;
    while(s<e)
    {
        swap(str[s],str[e]);
        s++;
        e--;
        
    }
    return str;
  //Your code here
}