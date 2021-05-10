/*
Take as input S, a string. Write a function that returns the character with maximum frequency. Print the value returned.

Input Format
String

Constraints
A string of length between 1 to 1000.

Output Format
Character

Sample Input
aaabacb
Sample Output
a
Explanation
For the given input string, a appear 4 times. Hence, it is the most frequent character.

*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    string a;
    cin>>a;
    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<a.length();i++)
    {
        freq[a[i]-'a']++;
    }
    int maxim=0;
    char ans;
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxim)
        {
            maxim=freq[i];
            ans=i+97;
        }
    }
    cout<<ans;
}