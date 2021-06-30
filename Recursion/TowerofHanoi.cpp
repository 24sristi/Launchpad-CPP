#include<iostream>
using namespace std;

void move(int n, char src, char helper, char dest)
{
    if(n==0)
    {
        return;
    }
    move(n-1, src, dest, helper);
    cout<<"Shift Disk "<<n<<"from "<<src<<" to "<<dest<<endl;
    move(n-1, helper, src, dest);
}

int main()
{
    int n;
    cin>>n;

    move( n ,'A','B','C');
}