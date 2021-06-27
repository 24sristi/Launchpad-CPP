#include<iostream>
#include<map>
#include<string.h>

using namespace std;

int main()
{
    map<string, int>m;
    //insertion
    m.insert(make_pair("mango", 100));
    pair<string, int>p;
    p.first="apple";
    p.second=120;
    m.insert(p);
    m["banana"]=75;
    string fruit;
    cin>>fruit;
    m.erase(fruit);//removes the node
    //searching
    auto it = m.find(fruit);
    if(it!=m.end())
    {
        cout<<fruit<<" costs: "<<m[fruit]<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    if(m.count(fruit))
    {
        cout<<"price is "<<m[fruit]<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    //update a node
    m["banana"]+=22;
    m["orange"]=352;
    m["strawberry"]=87;
    //iterate
    for(auto it= m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" -> "<<it->second<<endl;
    }
}