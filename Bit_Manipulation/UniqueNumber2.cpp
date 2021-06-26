/*We are given an array containg n numbers. All the numbers are present twice except for two numbers which are present only once. Find the unique numbers in linear time without using any extra space. ( Hint - Use Bitwise )

Input Format
First line contains the number n. Second line contains n space separated number.

Constraints
n < 10^5

Output Format
Output a single line containing the unique numbers separated by space

Sample Input
4
3 1 2 1
Sample Output
2 3
Explanation
Smaller number comes before larger number

*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        ans=ans^a[i];
    }
    int temp=ans;
    int pos=0;
    while((temp&1)==0)
    {
        n=n>>1;
        pos++;
    }
    int mask= 1<<pos;
    int x=0, y=0;
    for (int i = 0; i < n; i++)
    {
        if((a[i] & mask)>0)
        {
            x=x^a[i];
        }
    }
    y=ans^x;
    cout<<min(x,y)<<" "<<max(x,y);
    
    
}