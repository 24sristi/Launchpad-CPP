#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, vector<string>>Phonebook;
    Phonebook["Ram"].push_back("234543");
    Phonebook["Ram"].push_back("233443");
    Phonebook["Ram"].push_back("2302243");
    Phonebook["Ram"].push_back("1454543");
    Phonebook["Sita"].push_back("27492243");
    Phonebook["Sita"].push_back("0482543");
    Phonebook["Naina"].push_back("10354543");
    Phonebook["Amir"].push_back("27992243");
    Phonebook["Amir"].push_back("0452543");

    for(auto p: Phonebook)
    {
        cout<<"Name: "<<p.first<<"-> ";
        for(string s: p.second)
        {
            cout<<s<<", ";
        }
        cout<<endl;
    }

    string name;
    cin>>name;
    if(Phonebook.count(name)==0)
    {
        cout<<"absent";
    }
    else{
        cout<<name<<": ";
        for(string s: Phonebook[name])
        {
            cout<<s<<": ";
        }
    }



}