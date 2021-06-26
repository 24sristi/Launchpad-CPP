/*
We are given an array containg n numbers. All the numbers are present thrice except for one number which is only present once. Find the unique number. Only use - bitwise operators, and no extra space.

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
N < 10^5

Output Format
Output a single line containing the unique number

Sample Input
7
1 1 1 2 2 2 3
Sample Output
3
Explanation
3 is present only once

*/

#include<iostream>
using namespace std;

int main()
{
    int n,no;
    cin>>n;
    int cnt[64]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>no;
        int j=0;
        while(no>0)
        {
            int last_digit=no&1;
            cnt[j]+=last_digit;
            no=no>>1;
            j++;
        }
    }
    int ans=0;
    int p=1;
    for(int i=0;i<64;i++)
    {
        cnt[i]=cnt[i]%3;
        ans+=(cnt[i]*p);
        p*=2;
    }
    cout<<ans<<endl;
    
}