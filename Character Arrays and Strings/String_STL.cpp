#include<iostream>
#include<string>
using namespace std;

    string s;
    cin>>s;
    //normal for loop
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i]<<".";
    }
    cout<<"\n";
    //using auto iterator
    for(auto it=s.begin();it!=s.end();it++)
        cout<<(*it)<<"#";
    cout<<"\n";
    //using for each loop (c++11)
    for(auto c:s)
    {
        cout<<c<<".";
    }
    cout<<endl;
    string s2=" there brother";
    cout<<s.compare(s2)<<endl;
    s.append(s2);
    cout<<s;
    int idx= s.find("there");
    cout<<idx;//remove() and erase(word, len)
}


