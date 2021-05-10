/*
Take the following as input.

A character (ch) Write a function that returns ‘U’, if it is uppercase; ‘L’ if it is lowercase and ‘I’ otherwise. Print the value returned.

Input Format
Character (ch)

Constraints
No constraints

Output Format
'L' (if ch is lower-case) 'U' (if ch is upper-case) 'I' (otherwise)

Sample Input
s
Sample Output
L
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    char ch;
    cin>>ch;
    if(isupper(ch))
    {
        cout<<"U";
    }
    else if(islower(ch))
    {
        cout<<"L";
    }
    else
        cout<<"I";
}