/*
Deepak and Gautam are having a discussion on a new type of number that they call Coding Blocks Number or CB Number. They use following criteria to define a CB Number.

0 and 1 are not a CB number.
2,3,5,7,11,13,17,19,23,29 are CB numbers.
Any number not divisible by the numbers in point 2( Given above) are also CB numbers.
Deepak said he loved CB numbers.Hearing it, Gautam throws a challenge to him.

Gautam will give Deepak a string of digits. Deepak's task is to find the number of CB numbers in the string.

CB number once detected should not be sub-string or super-string of any other CB number.
Ex- In 4991, both 499 and 991 are CB numbers but you can choose either 499 or 991, not both.

Further, the CB number formed can only be a sub-string of the string.
Ex - In 481, you can not take 41 as CB number because 41 is not a sub-string of 481.

As there can be multiple solutions, Gautam asks Deepak to find the maximum number of CB numbers that can be formed from the given string.

Deepak has to take class of Launchpad students. Help him by solving Gautam's challenge.

Input Format
First line contain size of the string.

Next line is A string of digits.

Constraints
1 <= Length of strings of digits <= 17

Output Format
Maximum number of CB numbers that can be formed.

Sample Input
5
81615
Sample Output
2
Explanation
61 and 5 are two CB numbers.
*/

#include <bits/stdc++.h>
using namespace std;

bool CBnumber(long long sub)
{
    if(sub==0 || sub==1)
    {
        return false;
    }
    int x[]={2,3,5,7,11,13,17,19,23,29};
    for(int i=0;i<sizeof(x)/sizeof(int);i++)
    {
        if(sub==x[i])
        {
            return true;
        }
    }
    for(int i=0;i<sizeof(x)/sizeof(int);i++)
    {
        if(sub%x[i]==0)
        {
            return false;
        }
    }
    return true;
}

bool isvalid(bool visited[],int start, int end)
{
    for(int i=start;i<end;i++)
    {
        if(visited[i])
        {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool visited[100]={false};
    int count=0;
    for(int len=1;len<=s.length();len++)
    {
        for(int pos=0;pos<=s.length()-len;pos++)
        {
            int end=len+pos;
            string sub = s.substr(pos,len);
            if(CBnumber(stoll(sub)) && isvalid(visited,pos,end))
            {
                count++;
                for(int k=pos;k<end;k++)
                {
                    visited[k]=true;
                }
            }
        }
    }
    cout<<count;
}
