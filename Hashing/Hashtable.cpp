#include<iostream>
#include<cstring>
#include "Hashtable.h"
using namespace std;

int main()
{
    Hashtable<int>PriceMenu;
    PriceMenu.insert("burger", 120);
    PriceMenu.insert("noodles", 20);
    PriceMenu.insert("chips", 47);
    PriceMenu.insert("pepsi", 73);
    PriceMenu.insert("coke", 92);

    PriceMenu.print();

    int *price = PriceMenu.search("noodles");
    if(price==NULL)
    {
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Price is: "<<*price<<endl;
    }

    PriceMenu["Dosa"]=60;
    PriceMenu["Dosa"]+=10;
    cout<<"Price of Dosa: "<<PriceMenu["Dosa"]<<endl;
}

/*
OUTPUT:
bucket0-> 
bucket1-> pepsi-> 
bucket2-> 
bucket3-> 
bucket4-> 
bucket5-> chips-> 
bucket6-> noodles-> 
bucket7-> burger-> 
bucket8-> coke-> 
bucket9-> 
bucket10-> 
bucket11-> 
bucket12-> 
bucket13-> 
Price is: 20
Price of Dosa: 70

[Done] exited with code=0 in 4.427 seconds
*/