#include<bits/stdc++.h>
using namespace std;

string extractStringatKey(string str, int key)
{
    char *s = strtok((char*)str.c_str()," ");
    while(key>1)
    {
        s=strtok(NULL, " ");
        key--;
    }
    return s;
}

bool numericCompare(pair<string,string>a, pair<string, string>b)
{
    int x= stoi(a.second);
    int y= stoi(b.second);
    return x<y;
}

bool lexicoCompare(pair<string,string>a, pair<string, string>b)
{
    return a.second < b.second;
}

int main()
{
    int n;
    cin>>n;
    cin.get();
    string a[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i]);
    }
    int key;
    string reversal, ordering;
    cin>>key>>reversal>>ordering;
    pair<string, string> arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i].first=a[i];
        arr[i].second = extractStringatKey(a[i],key);
    }
    if(ordering == "numeric")
    {
        sort(arr, arr+n, numericCompare);
    }
    else{
        sort(arr, arr+n, lexicoCompare);
    }

    if(reversal=="true")
    {
        for(int i=0;i<n/2;i++)
        {
            swap(arr[i], arr[n-i-1]);
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i].first<<"\n";
    }
}